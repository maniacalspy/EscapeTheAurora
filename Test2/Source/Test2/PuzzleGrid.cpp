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
	
	pTileGridMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block_Mesh"));

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
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Purple, FString::SanitizeFloat(_XScale));
	//SetActorScale3D(*new FVector(_XScale, _YScale, 1.f));

	MyLevelGrid = GetLevelByNumber(LevelGridNumber);
	if(MyLevelGrid != nullptr) createGrid();
}




// Called when the game starts or when spawned
void APuzzleGrid::BeginPlay()
{
	Super::BeginPlay();

	//POSSIBLE TODO: CREATE A STARTPUZZLE FUNCTION THAT TAKES A BLOCK'S STARTING COORDINATE IN THE GRID AND SPAWN IT THERE
	//TODO: MAKE THIS ACTOR SPAWN A PUZZLE BLOCK RATHER THAN PUTTING ONE IN THE SCENE AND TRYING TO FIND IT
	//for (TActorIterator<APuzzleBlock> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator) {
	//	_pPuzzleActor = *ActorIterator;
	//}
	_pPuzzleActor = (APuzzleBlock*) GetWorld()->SpawnActor(APuzzleBlock::StaticClass());
	_pPuzzleActor->SetActorScale3D(*new FVector(_XScale, _YScale, _XScale));


	//TODO: MAKE THIS ACTOR SPAWN A DOOR ACTOR RATHER THAN FINDING ONE IN WORLD, THAT WAY WE DON'T HAVE TO CLARIFY WHICH DOOR WE WANT TO USE IF THERE IS AN ENTRANCE/EXIT DOOR
	for (TActorIterator<AEndLevelDoor> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator) {
		if((*ActorIterator)->GetName().Equals("EndLevelDoor" + FString::FromInt(LevelGridNumber))) _pDoorActor = *ActorIterator;
	}

	if (_pPuzzleActor != nullptr) {

		//_pPuzzleActor->SetCallBack(([this]() {this->OnBlockDoneTipping(); }));
		_pPuzzleActor->SetAllCallBacks(([this]() {this->OnBlockDoneTipping(); }), ([this](FVector impactNormal) {return this->MoveBlock(impactNormal); }));
		//_pPuzzleActor->SetOwnerGrid(*this);
	}

	if (MyLevelGrid != nullptr) SetBlockStartPosition();

}

// Called every frame
void APuzzleGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APuzzleGrid::OnBlockDoneTipping() 
{
	if(!puzzleIsSolved) CheckPuzzleSolved();
}



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

void APuzzleGrid::OnPuzzleSolved() {
	puzzleIsSolved = true;
	_pPuzzleActor->SetDestLocation(_pPuzzleActor->GetActorLocation() - *new FVector(0,0,_pPuzzleActor->BoxExtents.Z * 2 * _pPuzzleActor->GetActorScale().Z));
	if (_pDoorActor != nullptr) _pDoorActor->OpenDoor();
}


//GridTile* APuzzleGrid::GetTileNeighbor(GridTile& tile, int direction) {
//	return &tile;
//}

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
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::White, "Exiting Creategrid");
}

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
		FVector DestLocation = FVector::OneVector;
		FQuat DestRotation = FQuat::Identity;

		FVector ImpactXY = *new FVector(impactNormal.X, impactNormal.Y, 0);
		FVector ForwardXY = (*new FVector(GetActorForwardVector().X, GetActorForwardVector().Y, 0)).RotateAngleAxis(GetActorRotation().Yaw, GetActorUpVector());
		FVector RightXY = (*new FVector(GetActorRightVector().X, GetActorRightVector().Y, 0)).RotateAngleAxis(GetActorRotation().Yaw, GetActorUpVector());

		float CosForwardAngle = (FVector::DotProduct(ImpactXY, ForwardXY) / (ImpactXY.Size() * ForwardXY.Size()));
		float CosRightAngle = (FVector::DotProduct(ImpactXY, RightXY) / (ImpactXY.Size() * RightXY.Size()));
		FVector RotatingAxis = GetActorRightVector().RotateAngleAxis(GetActorRotation().Yaw, GetActorUpVector());
		_tileDirections TileDirection = _tileDirections::North;
		int RotationDirection = 1;
		if (CosForwardAngle < 0) {
			RotationDirection = -1;
			TileDirection = _tileDirections::South;
		}
		if (FMath::Abs(CosRightAngle) > FMath::Abs(CosForwardAngle)) {
			RotatingAxis = GetActorForwardVector().RotateAngleAxis(GetActorRotation().Yaw, GetActorUpVector());
			RotationDirection = -1;
			if (CosRightAngle < 0) {
				RotationDirection = 1;
				TileDirection = _tileDirections::West;
			}
			else TileDirection = _tileDirections::East;
		}

		GridTile* FirstCurrentTile = TilesBlockIsOn[0];
		GridTile* FirstOtherTile = nullptr;
		GridTile* SecondOtherTile = nullptr;
		if (FirstCurrentTile) FirstOtherTile = FirstCurrentTile->GetNeighbor(TileDirection);

		if (TilesBlockIsOn.Num() == 2) {
			GridTile* SecondCurrentTile = TilesBlockIsOn[1];
			if (SecondCurrentTile && FirstOtherTile) {
				SecondOtherTile = SecondCurrentTile->GetNeighbor(TileDirection);
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

					}
				}
			}
		}

		//Standing vertically -> tipped on side
		else if (TilesBlockIsOn.Num() == 1) {
			if (FirstOtherTile) {
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::SanitizeFloat(OtherTile->GetXPosition()));
				if (FirstOtherTile->type != TT_tileTypes::NonTraversable) {
					SecondOtherTile = FirstOtherTile->GetNeighbor(TileDirection);
					if (SecondOtherTile) {
						if (SecondOtherTile->type != TT_tileTypes::NonTraversable) {
							TilesBlockIsOn[0] = FirstOtherTile;
							TilesBlockIsOn.Add(SecondOtherTile);
							float XMidPoint = (FirstOtherTile->xPos + SecondOtherTile->xPos) / 2;
							float YMidPoint = (FirstOtherTile->yPos + SecondOtherTile->yPos) / 2;
							DestLocation = *new FVector(XMidPoint, YMidPoint, (GetActorLocation().Z + _pPuzzleActor->BoxExtents.X * _pPuzzleActor->GetActorScale().X));
							DestRotation = *new FQuat(RotatingAxis, RotationDirection * M_PI_2) * _pPuzzleActor->GetActorQuat();
						}
					}
				}
			}
		}

		if (DestLocation != FVector::OneVector && DestRotation != FQuat::Identity) {
			_pPuzzleActor->SetDestLocation(DestLocation);
			_pPuzzleActor->SetDestRotation(DestRotation);
			_pPuzzleActor->_isTipping = true;
			_pPuzzleActor->_canBePushed = false;
		}
	}
}


