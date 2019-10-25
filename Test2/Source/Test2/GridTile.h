#pragma once
#include "PuzzleGrid.h"

enum class TT_tileStates { Empty, BlockCovered, CantTravel, EmptyStart, BlockCoveredStart, EmptyGoal, BlockCoveredGoal };
enum class _tileDirections {North, East, South, West};

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

	void setNeighbor(GridTile& neighbor, _tileDirections direction);

	void setTileState(TT_tileStates tilestate);

public:



};