// Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzleGrid.h"
#include "Engine/Engine.h"
#include <functional>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

// Sets default values
APuzzleGrid::APuzzleGrid()
{
	
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene component"));

	pTileGridMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tile_Mesh"));

	TilesBlockIsOn = *new TArray<GridTile*>();
	MyStartPoints = *new TArray<GridTile*>();
	ValidDirections = *new TArray<_tileDirections>();

	puzzleIsSolved = false;
	IsInvalidTip = false;

}

void APuzzleGrid::PostInitializeComponents() {
	Super::PostInitializeComponents();
	_XScale = GetActorScale().X;
	_YScale = GetActorScale().Y;
	_tileWidth = 60.f * _YScale;
	_tileHeight = 60.f * _XScale;


	if (_pPuzzleActor == nullptr) {
		UWorld* World = GetWorld();
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		_pPuzzleActor = (APuzzleBlock*)GetWorld()->SpawnActor<APuzzleBlock>(APuzzleBlock::StaticClass(), GetActorLocation(), GetActorRotation(), SpawnParams);

	}

	_pPuzzleActor->SetActorScale3D(*new FVector(_XScale, _YScale, _XScale));

}




// Called when the game starts or when spawned
void APuzzleGrid::BeginPlay()
{
	Super::BeginPlay();
	MyLevelGrid = GetLevelByNumber(LevelGridNumber);
	BaseStartPoints = *new TArray<GridTile*>;
	if (MyLevelGrid != nullptr) createGrid();

	

	if (_pTriggerActor == nullptr) {
		//NAMING CONVENTION REQUIREMENT: THE DOOR THE PUZZLE OPENS WHEN IT IS SOLVED MUST BE NAMED EndLevelTriggers WITH THE LEVEL NUMBER APPENDED AT THE END
		for (TActorIterator<AEndLevelTriggers> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator) {

			FString ActorName = (*ActorIterator)->GetName();
			if (ActorName.Equals("EndLevelTriggers" + FString::FromInt(LevelGridNumber)) || ActorName.Equals("EndLevelTriggers_" + FString::FromInt(LevelGridNumber))) {
				_pTriggerActor = *ActorIterator;
			}
		}
	}
	//verify puzzle block actor pointer
	if (_pPuzzleActor != nullptr) {
		_pPuzzleActor->SetAllCallBacks(([this]() {this->OnBlockDoneTipping(); }), ([this](FVector impactNormal) {return this->MoveBlock(impactNormal); }));
	}

	//Verify level grid pointer
	if (MyLevelGrid != nullptr) SetBlockStartPosition();

}

void APuzzleGrid::EndPlay(const EEndPlayReason::Type EndPlayReason) {
	ResetPuzzle();
}

// Called every frame
void APuzzleGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//this function is where things like lighting triggers would be called, but that would require refactoring and possible subclassing (depending on the specific behavior)

//Call when The block has finished tipping
void APuzzleGrid::OnBlockDoneTipping() 
{
	if (IsInvalidTip)
	{
		_pPuzzleActor->SetDestLocation(LastValidLocation);
		_pPuzzleActor->SetDestRotation(LastValidRotation);
		IsInvalidTip = false;
		_pPuzzleActor->_isTipping = true;
		_pPuzzleActor->_canBePushed = false;
	}
	else if (!puzzleIsSolved) {
		CheckPuzzleSolved();
		UpdateLastCoordinates();
		FindValidTipDirections();
		for (auto Direction : ValidDirections) {
			FVector directionVector = ConvertDirectionToVector(Direction);
			_pPuzzleActor->EnableHologram(directionVector);
		}
	}
	else _pPuzzleActor->_canBePushed = false;
}

void APuzzleGrid::UpdateLastCoordinates() {
	MyLevelGrid->thisState->LastTileOneXCoordinate = TilesBlockIsOn[0]->GetXPosition();
	MyLevelGrid->thisState->LastTileOneYCoordinate = TilesBlockIsOn[0]->GetYPosition();

	if (TilesBlockIsOn.Num() > 1) {
		MyLevelGrid->thisState->LastTileTwoXCoordinate = TilesBlockIsOn[1]->GetXPosition();
		MyLevelGrid->thisState->LastTileTwoYCoordinate = TilesBlockIsOn[1]->GetYPosition();
	}
	else {
		MyLevelGrid->thisState->LastTileTwoXCoordinate = -1.f;
		MyLevelGrid->thisState->LastTileTwoYCoordinate = -1.f;
	}
}

//Checks if the puzzle is solved, and if so, calls OnPuzzleSolved
void APuzzleGrid::CheckPuzzleSolved() {
	if (TilesBlockIsOn.Num() == MyLevelGrid->GoalSpots) {
		bool ValidSolution = true;
		for (GridTile* tile : TilesBlockIsOn)
		{
			if (!(MyGoalPoints.Contains(tile))) {
				ValidSolution = false;
			}
		}

		if (ValidSolution) OnPuzzleSolved();
	}
}

//lowers the block into the hole and triggers the events
void APuzzleGrid::OnPuzzleSolved() {
	puzzleIsSolved = true;
	_pPuzzleActor->SetDestLocation(_pPuzzleActor->GetActorLocation() - *new FVector(0, 0, _pPuzzleActor->_boxExtents.Z * 2 * _pPuzzleActor->GetActorScale().Z));
	if (!MyLevelGrid->thisState->isSolved) {
		MyLevelGrid->thisState->isSolved = true;
		_pPuzzleActor->_canBePushed = false;
		//UpdateLastCoordinates();
		if (_pTriggerActor != nullptr) _pTriggerActor->OnLevelEnded();
	}
	
}

//create the puzzle grid based on MyLevelGrid
void APuzzleGrid::createGrid() {
	if (MyLevelGrid != nullptr) {
		
		int RowCount = MyLevelGrid->RowCount;
		int ColumnCount = MyLevelGrid->ColumnCount;

		float rotationAngleDegrees = -GetActorRotation().Yaw;

		float AngleRadians = (rotationAngleDegrees * M_PI / 180.0);

		float CosAngle = cos(AngleRadians);
		float SinAngle = sin(AngleRadians);

		float initialXpos = GetActorLocation().X  + ((((RowCount -1) /2.0f) * _tileHeight) * CosAngle - (((ColumnCount - 1) / 2.0f) * _tileWidth) * SinAngle);
		float initialYpos = GetActorLocation().Y - ((((ColumnCount - 1) / 2.0f) * _tileWidth) * CosAngle + (((RowCount - 1) / 2.0f) * _tileHeight) * SinAngle);

		
		for (int i = 0; i < RowCount; i++) {
			for (int j = 0; j < ColumnCount; j++) {
				

				TT_tileTypes thisTileType = MyLevelGrid->thisGrid[i*ColumnCount + j];
				GridTile* CurrentTile = new GridTile(thisTileType, TT_tileStates::Empty, initialXpos -  ( (i * _tileHeight) * CosAngle - (j * _tileWidth) * SinAngle )
					, initialYpos + ( (j * _tileWidth) * CosAngle + (i * _tileHeight) * SinAngle ) );
				if (MyLevelGrid->thisState) {
					//COMPARE COORDINATES TO THE LAST TILE COORDINATES AND IF THEY MATCH ADD THEM TO THE LIST
					if ((CurrentTile->GetXPosition() == MyLevelGrid->thisState->LastTileOneXCoordinate && CurrentTile->GetYPosition() == MyLevelGrid->thisState->LastTileOneYCoordinate)
						|| (CurrentTile->GetXPosition() == MyLevelGrid->thisState->LastTileTwoXCoordinate && CurrentTile->GetYPosition() == MyLevelGrid->thisState->LastTileTwoYCoordinate)) {
						MyStartPoints.Add(CurrentTile);
					}
				}
				if (thisTileType == TT_tileTypes::Start && BaseStartPoints.Num() < MyLevelGrid->StartSpots) BaseStartPoints.Add(CurrentTile);
				if (thisTileType == TT_tileTypes::Goal) MyGoalPoints.Add(CurrentTile);
				if (j > 0) CurrentTile->setNeighbor(_puzzleGrid[(i*ColumnCount + j) - 1], _tileDirections::West);
				if (i > 0) CurrentTile->setNeighbor(_puzzleGrid[((i - 1)*ColumnCount + j)], _tileDirections::North);
				_puzzleGrid.Add(CurrentTile);
			
			}
		}
		if (MyStartPoints.Num() == 0) MyStartPoints = BaseStartPoints;
	}
}

//Set the block to the designated starting position
void APuzzleGrid::SetBlockStartPosition() {
	
	if (_pPuzzleActor != nullptr) {
		_pPuzzleActor->DisableAllHolograms();
		//There has to always be at least one starting tile, so this is safe to assume
		GridTile* StartTileOne = MyStartPoints[0];
		GridTile* StartTileTwo;
		TilesBlockIsOn.Add(StartTileOne);
		FVector StartPosition;

		FQuat StartRotation = GetActorQuat();
		switch (MyStartPoints.Num())
		{
		case 1:
			StartPosition = *new FVector(StartTileOne->GetXPosition(), StartTileOne->GetYPosition(), this->GetActorLocation().Z + (_pPuzzleActor->_boxExtents.Z) * _pPuzzleActor->GetActorScale().Z);
			break;
		case 2:
			StartTileTwo = MyStartPoints[1];
			TilesBlockIsOn.Add(StartTileTwo);
			StartPosition = *new FVector((TilesBlockIsOn[0]->xPos + TilesBlockIsOn[1]->xPos) / 2, (TilesBlockIsOn[0]->yPos + TilesBlockIsOn[1]->yPos) / 2, _pPuzzleActor->GetActorLocation().Z - _pPuzzleActor->_boxExtents.X * _XScale);
			StartRotation = *new FQuat(FindRotateAxis(
				(*new FVector(StartTileTwo->GetXPosition() - StartTileOne->GetXPosition(), StartTileTwo->GetYPosition() - StartTileOne->GetYPosition(), 0)).GetSafeNormal()), M_PI_2) * StartRotation;
			break;
		default:
			break;
		}

		_pPuzzleActor->SetActorRotation(StartRotation);
		_pPuzzleActor->SetActorLocation(StartPosition);

		int xone, yone, xtwo, ytwo;
		xone = MyStartPoints[0]->GetXPosition();
		yone = MyStartPoints[0]->GetYPosition();
		if (MyStartPoints.Num() == 1) {
			xtwo = ytwo = -1;
		}
		else {
			xtwo = MyStartPoints[1]->GetXPosition();
			ytwo = MyStartPoints[1]->GetYPosition();
		}

		if (MyLevelGrid->thisState == nullptr) {
			MyLevelGrid->thisState = new LevelGridState(xone, yone, xtwo, ytwo, false);
		}
		else if (MyLevelGrid->thisState->isSolved) OnPuzzleSolved();

		FindValidTipDirections();
		for (auto Direction : ValidDirections) {
			FVector directionVector = ConvertDirectionToVector(Direction);
			_pPuzzleActor->EnableHologram(directionVector);
		}
	}
}


void APuzzleGrid::ResetPuzzle() {
	if (MyLevelGrid->thisState) {
		puzzleIsSolved = false;
		MyLevelGrid->thisState = nullptr;
		MyStartPoints = BaseStartPoints;
		SetBlockStartPosition();
	}
}

FVector APuzzleGrid::FindRotateAxis(FVector impactNormal) {
	//strip off the Z component of the impact normal and the forward and right vector to make them more lightweight and to avoid the z axis causing math issues
	FVector2D ImpactXY = *new FVector2D(impactNormal.X, impactNormal.Y);
	FVector2D ForwardXY = *new FVector2D(GetActorForwardVector().X, GetActorForwardVector().Y);
	FVector2D RightXY = *new FVector2D(GetActorRightVector().X, GetActorRightVector().Y);

	//use the law of cosines to determine the angle between the impact normal and the forward and right axis
	float CosForwardAngle = (FVector2D::DotProduct(ImpactXY, ForwardXY) / (ImpactXY.Size() * ForwardXY.Size()));
	float CosRightAngle = (FVector2D::DotProduct(ImpactXY, RightXY) / (ImpactXY.Size() * RightXY.Size()));

	//Assume we rotate along the right axis
	FVector RotatingAxis = GetActorRightVector();

	//the direction to rotate, positive means North/West, and negative means South/East
	int RotationDirection = 1;

	if (CosForwardAngle < 0) {
		RotationDirection = -1;
	}

	if (FMath::Abs(CosRightAngle) > FMath::Abs(CosForwardAngle)) {
		//assume we move east
		RotatingAxis = GetActorForwardVector();
		RotationDirection = -1;

		//if the impact came from the east side, move west
		if (CosRightAngle < 0) {
			RotationDirection = 1;
			//TileDirection = _tileDirections::West;
		}
		//else TileDirection = _tileDirections::East;
	}

	RotatingAxis *= RotationDirection;
	return RotatingAxis;

}

void APuzzleGrid::MoveBlock(FVector impactNormal) {
	if (!puzzleIsSolved)
	{
		ValidDirections.Empty();
		_pPuzzleActor->DisableAllHolograms();
		//Set Placeholder values for DestLocation and DestRotation
		FVector DestLocation = FVector::OneVector;
		FQuat DestRotation = FQuat::Identity;

		//assume we rotate along the right axis (tip forward/backwards), and assume we move north
		FVector RotatingAxis = FindRotateAxis(impactNormal);

		_tileDirections TileDirection = _tileDirections::North;

		if (RotatingAxis == -GetActorRightVector()) TileDirection = _tileDirections::South;
		else if (RotatingAxis == GetActorForwardVector()) TileDirection = _tileDirections::West;
		else if (RotatingAxis == -GetActorForwardVector()) TileDirection = _tileDirections::East;

		//the block is on at least one tile at all times
		GridTile* FirstCurrentTile = TilesBlockIsOn[0];
		
		//the target tiles
		GridTile* FirstOtherTile = nullptr;
		GridTile* SecondOtherTile = nullptr;
		//verify tile pointer, then get the tile's neighbor
		if (FirstCurrentTile) FirstOtherTile = FirstCurrentTile->GetNeighbor(TileDirection);

		//block is laying on its side
		if (TilesBlockIsOn.Num() == 2) {

			//get the second tile the block is on
			GridTile* SecondCurrentTile = TilesBlockIsOn[1];

			//Verifying the tile pointers to avoid errors
			if (SecondCurrentTile && FirstOtherTile) {
				
				SecondOtherTile = SecondCurrentTile->GetNeighbor(TileDirection);
				if (SecondOtherTile) {
					//both target tiles are valid to travel on
					if (FirstOtherTile->type != TT_tileTypes::NonTraversable && SecondOtherTile->type != TT_tileTypes::NonTraversable) {

						//Stand block on its edge
						if (FirstOtherTile == SecondCurrentTile) {
							SetDestinationViaTiles({SecondOtherTile}, RotatingAxis);
							if (_pPuzzleActor->pTipEdgeSound) _pPuzzleActor->pTipEdgeSound->Play();
						}

						//Stand Block on edge other direction
						else if (SecondOtherTile == FirstCurrentTile) {
							SetDestinationViaTiles({ FirstOtherTile }, RotatingAxis);
							if (_pPuzzleActor->pTipEdgeSound) _pPuzzleActor->pTipEdgeSound->Play();
						}

						//Block Stays on side
						else {
							SetDestinationViaTiles({ FirstOtherTile, SecondOtherTile }, RotatingAxis);
							if (_pPuzzleActor->pTipSideSound) _pPuzzleActor->pTipSideSound->Play();
						} //end of else
					} //end of nontraversable if
					else if (SecondOtherTile->type == TT_tileTypes::NonTraversable || FirstOtherTile->type == TT_tileTypes::NonTraversable) // flip but not fully 
					{
						
						if (FirstOtherTile == SecondCurrentTile || SecondOtherTile == FirstCurrentTile) 
						{
							IsInvalidTip = true;
							LastValidRotation = _pPuzzleActor -> GetActorQuat();
							LastValidLocation = _pPuzzleActor -> GetActorLocation();
							DestLocation = *new FVector((FirstOtherTile->xPos + SecondOtherTile->xPos) / 2, (FirstOtherTile->yPos + SecondOtherTile->yPos) / 2, (GetActorLocation().Z + _pPuzzleActor->_boxExtents.Z * _pPuzzleActor->GetActorScale().Z));
							DestRotation = *new FQuat(RotatingAxis, M_PI_4) * _pPuzzleActor->GetActorQuat();
						}
						else {
							float Xoffset = _tileHeight;
							Xoffset *= (FVector::DotProduct(RotatingAxis, GetActorRightVector()) / (RotatingAxis.Size() * GetActorRightVector().Size()));
							float Yoffset = _tileWidth;
							Yoffset *= -(FVector::DotProduct(RotatingAxis, GetActorForwardVector()) / (RotatingAxis.Size() * GetActorForwardVector().Size()));
							IsInvalidTip = true;
							LastValidRotation = _pPuzzleActor->GetActorQuat();
							LastValidLocation = _pPuzzleActor->GetActorLocation();
							float XMidPoint = (TilesBlockIsOn[0]->xPos + TilesBlockIsOn[1]->xPos) / 2;
							float YMidPoint = (TilesBlockIsOn[0]->yPos + TilesBlockIsOn[1]->yPos) / 2;
							DestLocation = *new FVector(XMidPoint + Xoffset/2, YMidPoint + Yoffset/2, _pPuzzleActor->GetActorLocation().Z);
							DestRotation = *new FQuat(RotatingAxis, M_PI_4) * _pPuzzleActor->GetActorQuat();
						} //end of else

					} //end of secondothertile else if
				}//end of verify Secondother if
			}//end of verify pointers if
		} //end of TilesBlockIsOn if

		//Standing vertically -> tipped on side
		else if (TilesBlockIsOn.Num() == 1) {
			//verify target tile pointer
			if (FirstOtherTile) {
				//check if target is traversable
				if (FirstOtherTile->type != TT_tileTypes::NonTraversable) {
					//get second target tile
					SecondOtherTile = FirstOtherTile->GetNeighbor(TileDirection);
					//verify other target tile pointer
					if (SecondOtherTile) {
						//check if other target is traversable
						if (SecondOtherTile->type != TT_tileTypes::NonTraversable) {

							SetDestinationViaTiles({ FirstOtherTile, SecondOtherTile }, RotatingAxis);
							if (_pPuzzleActor->pTipSideSound) _pPuzzleActor->pTipSideSound->Play();
						}//end of secondOtherTile nontraversable if
					}//end of verifying second other tile
				}//end of firstOtherTile NonTraversable if
			}// end of verifying first tile
		}//end of TilesBlockIsOn if

		//if the block is attempting to be pushed out of the puzzle grid area
		if (!FirstOtherTile || !SecondOtherTile)
		{
			float AngleDegrees =  GetActorRotation().Yaw;

			float AngleRadians = (AngleDegrees * M_PI / 180.0);

			float CosAngle = cos(AngleRadians);
			float SinAngle = sin(AngleRadians);

			float Xoffset = _tileHeight;
			Xoffset *= (FVector::DotProduct(RotatingAxis, GetActorRightVector()) / (RotatingAxis.Size() * GetActorRightVector().Size()));
			float Yoffset = _tileWidth;
			Yoffset *= -(FVector::DotProduct(RotatingAxis, GetActorForwardVector()) / (RotatingAxis.Size() * GetActorForwardVector().Size()));
			if (FirstOtherTile)
			{
				IsInvalidTip = true;
				LastValidRotation = _pPuzzleActor->GetActorQuat();
				LastValidLocation = _pPuzzleActor->GetActorLocation();
				DestLocation = *new FVector(FirstOtherTile->xPos, FirstOtherTile->yPos , (GetActorLocation().Z + _pPuzzleActor->_boxExtents.Z * _pPuzzleActor->GetActorScale().Z));
				DestRotation = *new FQuat(RotatingAxis, M_PI_4) * _pPuzzleActor->GetActorQuat();
			}
			else {
				
				if (TilesBlockIsOn.Num() == 2)
				{
					IsInvalidTip = true;	
					LastValidRotation = _pPuzzleActor->GetActorQuat();
					LastValidLocation = _pPuzzleActor->GetActorLocation();
					float XMidPoint = (TilesBlockIsOn[0]->xPos + TilesBlockIsOn[1]->xPos) / 2;
					float YMidPoint = (TilesBlockIsOn[0]->yPos + TilesBlockIsOn[1]->yPos) / 2;
					DestLocation = *new FVector(XMidPoint + (Xoffset * CosAngle  - Yoffset * SinAngle)/2, YMidPoint + (Yoffset * CosAngle + Xoffset * SinAngle)/2, _pPuzzleActor->GetActorLocation().Z);
					DestRotation = *new FQuat(RotatingAxis, M_PI_4) * _pPuzzleActor->GetActorQuat();
				}
				else {
					IsInvalidTip = true;
					LastValidRotation = _pPuzzleActor->GetActorQuat();
					LastValidLocation = _pPuzzleActor->GetActorLocation();
					DestLocation = *new FVector(TilesBlockIsOn[0]->xPos + (Xoffset * CosAngle - Yoffset * SinAngle), TilesBlockIsOn[0]->yPos + (Yoffset * CosAngle + Xoffset * SinAngle), (GetActorLocation().Z + _pPuzzleActor->_boxExtents.Z * _pPuzzleActor->GetActorScale().Z));
					DestRotation = *new FQuat(RotatingAxis,  M_PI_4) * _pPuzzleActor->GetActorQuat();
				}
			}
		}


		//check if DestLocation or DestRotation were changed
		if (DestLocation != FVector::OneVector && DestRotation != FQuat::Identity) {
			_pPuzzleActor->SetDestLocation(DestLocation);
			_pPuzzleActor->SetDestRotation(DestRotation);

			_pPuzzleActor->_isTipping = true;
			_pPuzzleActor->_canBePushed = false;
		}//end of checking DestLocation and DestRotation
	}//end of checking if the puzzle is solved
}
void APuzzleGrid::SetDestinationViaTiles(TArray<GridTile*> DestTiles, FVector Axis)
{
	switch (DestTiles.Num()) {
	case 1:
		TilesBlockIsOn.Empty();
		TilesBlockIsOn.Add(DestTiles[0]);
		_pPuzzleActor->SetDestLocation(*new FVector(DestTiles[0]->xPos, DestTiles[0]->yPos, (GetActorLocation().Z + _pPuzzleActor->_boxExtents.Z * _pPuzzleActor->GetActorScale().Z)));
		_pPuzzleActor->SetDestRotation(*new FQuat(Axis, M_PI_2) * _pPuzzleActor->GetActorQuat());

		_pPuzzleActor->_isTipping = true;
		_pPuzzleActor->_canBePushed = false;
		break;
	case 2:
		TilesBlockIsOn.Empty();
		TilesBlockIsOn.Add(DestTiles[0]);
		TilesBlockIsOn.Add(DestTiles[1]);

		float XMidPoint = (DestTiles[0]->xPos + DestTiles[1]->xPos) / 2;
		float YMidPoint = (DestTiles[0]->yPos + DestTiles[1]->yPos) / 2;

		_pPuzzleActor->SetDestLocation(*new FVector(XMidPoint, YMidPoint, (GetActorLocation().Z + _pPuzzleActor->_boxExtents.X * _pPuzzleActor->GetActorScale().X)));
		_pPuzzleActor->SetDestRotation(*new FQuat(Axis, M_PI_2) * _pPuzzleActor->GetActorQuat());
		break;
	}
}
//end of method

void APuzzleGrid::FindValidTipDirections() {
	for (auto direction : allTileDirections) {
		GridTile* FirstOtherTile = TilesBlockIsOn[0]->GetNeighbor(direction);
		GridTile* SecondOtherTile = nullptr;
		switch (TilesBlockIsOn.Num())
		{
		case 1:
			if (FirstOtherTile) {
				if (FirstOtherTile->type != TT_tileTypes::NonTraversable) {
					SecondOtherTile = FirstOtherTile->GetNeighbor(direction);
					if (SecondOtherTile) {
						if (SecondOtherTile->type != TT_tileTypes::NonTraversable) ValidDirections.Add(direction);
					}
				}
			}
			break;
		case 2:
			SecondOtherTile = TilesBlockIsOn[1]->GetNeighbor(direction);
			if (FirstOtherTile && SecondOtherTile) {
				if (FirstOtherTile->type != TT_tileTypes::NonTraversable && SecondOtherTile->type != TT_tileTypes::NonTraversable) ValidDirections.Add(direction);
			}
			break;

		default:
			break;
		}
	}
}

FVector APuzzleGrid::ConvertDirectionToVector(_tileDirections Direction) {
	switch (Direction)
	{
	case _tileDirections::North:
		return -GetActorForwardVector().GetSafeNormal();
		break;
	case _tileDirections::East:
		return -GetActorRightVector().GetSafeNormal();
		break;
	case _tileDirections::South:
		return GetActorForwardVector().GetSafeNormal();
		break;
	case _tileDirections::West:
		return GetActorRightVector().GetSafeNormal();
		break;
	default:
		return FVector::ZeroVector;
		break;
	}
}