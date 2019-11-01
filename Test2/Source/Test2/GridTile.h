#pragma once
#include "PuzzleGrid.h"

enum class TT_tileStates { Empty, BlockCovered, CantTravel, EmptyStart, BlockCoveredStart, EmptyGoal, BlockCoveredGoal };
class APuzzleGrid;

class GridTile
{

public:
	GridTile();
	friend class APuzzleGrid;

private:
	float xPos, yPos;
	TT_tileStates thisTileState;
	GridTile *northNeighbor, *southNeighbor, *eastNeighbor, *westNeighbor;

public:



};