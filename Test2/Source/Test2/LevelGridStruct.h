#pragma once
#include "GridTile.h"


struct LevelGridState {
	float LastTileOneXCoordinate, LastTileOneYCoordinate;

	float LastTileTwoXCoordinate, LastTileTwoYCoordinate;

	bool isSolved;

	LevelGridState(float xonepos, float yonepos, float xtwopos, float ytwopos, bool solved);
};


struct LevelGrid {	
	int RowCount;
	int ColumnCount;
	int StartSpots;
	int GoalSpots;
	
	LevelGridState* thisState;

	TT_tileTypes* thisGrid;

	LevelGrid(int rows, int columns, int startspots, int goalspots, TT_tileTypes* grid);
	LevelGrid(int rows, int columns, int startspots, int goalspots, TT_tileTypes* grid, LevelGridState* state);

};

LevelGrid* GetLevelByNumber(int levelnumber);

extern LevelGrid* Level_One;

