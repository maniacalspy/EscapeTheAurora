#pragma once
//#include "PuzzleGrid.h"

enum class TT_tileTypes { Goal, Start, Basic, NonTraversable };
enum class TT_tileStates { Empty, Covered};
enum class _tileDirections {North, East, South, West};

class APuzzleGrid;

class GridTile
{
public:
	GridTile();
	GridTile(TT_tileTypes tiletype, TT_tileStates tilestate, float x, float y);
	friend class APuzzleGrid;

private:
	const float xPos, yPos;
	TT_tileTypes type;
	TT_tileStates state;
	GridTile *northNeighbor = nullptr, *southNeighbor = nullptr, *eastNeighbor = nullptr, *westNeighbor = nullptr;

	

public:

	float GetXPosition();
	float GetYPosition();

	GridTile* GetNeighbor(_tileDirections direction);

	TT_tileTypes GetTileType();

	void setNeighbor(GridTile* neighbor, _tileDirections direction);

	void setTileType(TT_tileTypes tiletype);

	void setTileState(TT_tileStates tilestate);

};