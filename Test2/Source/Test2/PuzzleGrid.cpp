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
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene component"));

	pTileGridMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tile_Mesh"));

	TilesBlockIsOn = *new TArray<GridTile*>();
	MyStartPoints = *new TArray<GridTile*>();

	puzzleIsSolved = false;
}

void APuzzleGrid::PostInitializeComponents() {
	Super::PostInitializeComponents();
	_XScale = GetActorScale().X;
	_YScale = GetActorScale().Y;
	_tileWidth = 30.f * _YScale;
	_tileHeight = 30.f * _XScale;
	//SetActorScale3D(*new FVector(_XScale, _YScale, 1.f));

	MyLevelGrid = GetLevelByNumber(LevelGridNumber);
	if(MyLevelGrid != nullptr) createGrid();
}




// Called when the game starts or when spawned
void APuzzleGrid::BeginPlay()
{
	Super::BeginPlay();

	_pPuzzleActor = (APuzzleBlock*) GetWorld()->SpawnActor(APuzzleBlock::StaticClass());
	_pPuzzleActor->SetActorScale3D(*new FVector(_XScale, _YScale, _XScale));


	//NAMING CONVENTION REQUIREMENT: THE DOOR THE PUZZLE OPENS WHEN IT IS SOLVED MUST BE NAMED EndLevelTriggers WITH THE LEVEL NUMBER APPENDED AT THE END
	for (TActorIterator<AEndLevelTriggers> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator) {
		
		FString ActorName = (*ActorIterator)->GetName();
		if (ActorName.Equals("EndLevelTriggers" + FString::FromInt(LevelGridNumber)) || ActorName.Equals("EndLevelTriggers_" + FString::FromInt(LevelGridNumber))) {
			_pTriggerActor = *ActorIterator;
		}
	}

	//verify puzzle block actor pointer
	if (_pPuzzleActor != nullptr) {
		_pPuzzleActor->SetAllCallBacks(([this]() {this->OnBlockDoneTipping(); }), ([this](FVector impactNormal) {return this->MoveBlock(impactNormal); }));
	}

	//Verify level grid pointer
	if (MyLevelGrid != nullptr) SetBlockStartPosition();

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
	if(!puzzleIsSolved) CheckPuzzleSolved();
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
	_pPuzzleActor->SetDestLocation(_pPuzzleActor->GetActorLocation() - *new FVector(0,0,_pPuzzleActor->BoxExtents.Z * 2 * _pPuzzleActor->GetActorScale().Z));
	if (_pTriggerActor != nullptr) _pTriggerActor->TriggerAll();
}

//create the puzzle grid based on MyLevelGrid
void APuzzleGrid::createGrid() {
	if (MyLevelGrid != nullptr) {
		float initialXpos = GetActorLocation().X  + ((MyLevelGrid->RowCount -1) /2.0f) * _tileHeight;
		float initialYpos = GetActorLocation().Y - ((MyLevelGrid->ColumnCount - 1) / 2.0f) * _tileWidth;
		
		for (int i = 0; i < MyLevelGrid->RowCount; i++) {
			for (int j = 0; j < MyLevelGrid->ColumnCount; j++) {
				

				TT_tileTypes thisTileType = MyLevelGrid->thisGrid[i*MyLevelGrid->ColumnCount + j];
				GridTile* CurrentTile = new GridTile(thisTileType, TT_tileStates::Empty, initialXpos - i * _tileHeight, initialYpos + j * _tileWidth);
				if (thisTileType == TT_tileTypes::Start) MyStartPoints.Add(CurrentTile);
				if (thisTileType == TT_tileTypes::Goal) MyGoalPoints.Add(CurrentTile);
				if (j > 0) CurrentTile->setNeighbor(_puzzleGrid[(i*MyLevelGrid->ColumnCount + j) - 1], _tileDirections::West);
				if (i > 0) CurrentTile->setNeighbor(_puzzleGrid[((i - 1)*MyLevelGrid->ColumnCount + j)], _tileDirections::North);
				_puzzleGrid.Add(CurrentTile);
			
			}
		}
		
	}
}

//Set the block to the designated starting position
void APuzzleGrid::SetBlockStartPosition() {
	
	if (_pPuzzleActor != nullptr) {
		GridTile* StartTile = MyStartPoints[0];
		FVector StartPosition = *new FVector(StartTile->GetXPosition(), StartTile->GetYPosition(), this->GetActorLocation().Z + (_pPuzzleActor->BoxExtents.Z) * _pPuzzleActor->GetActorScale().Z);
		_pPuzzleActor->SetActorRotation(*new FQuat(_pPuzzleActor->GetActorUpVector(), M_PI));
		TilesBlockIsOn.Add(StartTile);
		_pPuzzleActor->SetActorLocation(StartPosition);
	}
}


void APuzzleGrid::MoveBlock(FVector impactNormal) {
	if (!puzzleIsSolved)
	{
		//Set Placeholder values for DestLocation and DestRotation
		FVector DestLocation = FVector::OneVector;
		FQuat DestRotation = FQuat::Identity;

		//strip off the Z component of the impact normal and the forward and right vector to make them more lightweight and to avoid the z axis causing math issues
		FVector2D ImpactXY = *new FVector2D(impactNormal.X, impactNormal.Y);
		FVector2D ForwardXY = *new FVector2D(GetActorForwardVector().X, GetActorForwardVector().Y);
		FVector2D RightXY = *new FVector2D(GetActorRightVector().X, GetActorRightVector().Y);

		//use the law of cosines to determine the angle between the impact normal and the forward and right axis
		float CosForwardAngle = (FVector2D::DotProduct(ImpactXY, ForwardXY) / (ImpactXY.Size() * ForwardXY.Size()));
		float CosRightAngle = (FVector2D::DotProduct(ImpactXY, RightXY) / (ImpactXY.Size() * RightXY.Size()));

		//assume we rotate along the right axis (tip forward/backwards), and assume we move north
		FVector RotatingAxis = GetActorRightVector();
		_tileDirections TileDirection = _tileDirections::North;
		//the direction to rotate, positive means North/West, and negative means South/East
		int RotationDirection = 1;

		//the hit came from the north side of the block, move south
		if (CosForwardAngle < 0) {
			RotationDirection = -1;
			TileDirection = _tileDirections::South;
		}

		//if the cosine of the angle between the right axis and the impact is greater than the cosine of the angle between the forward axis and the impact, the block was hit from the side
		if (FMath::Abs(CosRightAngle) > FMath::Abs(CosForwardAngle)) {
			//assume we move east
			RotatingAxis = GetActorForwardVector();
			RotationDirection = -1;

			//if the impact came from the east side, move west
			if (CosRightAngle < 0) {
				RotationDirection = 1;
				TileDirection = _tileDirections::West;
			}
			else TileDirection = _tileDirections::East;
		}

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
							TilesBlockIsOn.Empty();
							TilesBlockIsOn.Add(SecondOtherTile);
							DestLocation = *new FVector(SecondOtherTile->xPos, SecondOtherTile->yPos, (GetActorLocation().Z + _pPuzzleActor->BoxExtents.Z * _pPuzzleActor->GetActorScale().Z));
							DestRotation = *new FQuat(RotatingAxis, RotationDirection * M_PI_2) * _pPuzzleActor->GetActorQuat();
						}

						//Stand Block on edge other direction
						else if (SecondOtherTile == FirstCurrentTile) {
							TilesBlockIsOn.Empty();
							TilesBlockIsOn.Add(FirstOtherTile);
							DestLocation = *new FVector(FirstOtherTile->xPos, FirstOtherTile->yPos, (GetActorLocation().Z + _pPuzzleActor->BoxExtents.Z * _pPuzzleActor->GetActorScale().Z));
							DestRotation = *new FQuat(RotatingAxis, RotationDirection * M_PI_2) * _pPuzzleActor->GetActorQuat();

						}

						//Block Stays on side
						else {
							TilesBlockIsOn[0] = FirstOtherTile;
							TilesBlockIsOn[1] = SecondOtherTile;
							float XMidPoint = (TilesBlockIsOn[0]->xPos + TilesBlockIsOn[1]->xPos) / 2;
							float YMidPoint = (TilesBlockIsOn[0]->yPos + TilesBlockIsOn[1]->yPos) / 2;
							DestLocation = *new FVector(XMidPoint, YMidPoint, _pPuzzleActor->GetActorLocation().Z);
							DestRotation = *new FQuat(RotatingAxis, RotationDirection * M_PI_2) * _pPuzzleActor->GetActorQuat();

						} //end of else
					} //end of nontraversable if
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

							TilesBlockIsOn[0] = FirstOtherTile;
							TilesBlockIsOn.Add(SecondOtherTile);
							
							float XMidPoint = (FirstOtherTile->xPos + SecondOtherTile->xPos) / 2;
							float YMidPoint = (FirstOtherTile->yPos + SecondOtherTile->yPos) / 2;
							
							DestLocation = *new FVector(XMidPoint, YMidPoint, (GetActorLocation().Z + _pPuzzleActor->BoxExtents.X * _pPuzzleActor->GetActorScale().X));
							DestRotation = *new FQuat(RotatingAxis, RotationDirection * M_PI_2) * _pPuzzleActor->GetActorQuat();
						
						}//end of secondOtherTile nontraversable if
					}//end of verifying second other tile
				}//end of firstOtherTile NonTraversable if
			}// end of verifying first tile
		}//end of TilesBlockIsOn if

		//check if DestLocation or DestRotation were changed
		if (DestLocation != FVector::OneVector && DestRotation != FQuat::Identity) {
			_pPuzzleActor->SetDestLocation(DestLocation);
			_pPuzzleActor->SetDestRotation(DestRotation);

			_pPuzzleActor->_isTipping = true;
			_pPuzzleActor->_canBePushed = false;

		}//end of checking DestLocation and DestRotation
	}//end of checking if the puzzle is solved
}//end of method


