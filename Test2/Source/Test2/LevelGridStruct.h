#pragma once
#include "GridTile.h"

struct LevelGrid {	
	int RowCount;
	int ColumnCount;
	int StartSpots;
	int GoalSpots;

	TT_tileTypes* thisGrid;

	LevelGrid(int rows, int columns, int startspots, int goalspots, TT_tileTypes* grid);

};

LevelGrid* GetLevelByNumber(int levelnumber);


extern LevelGrid* Level_One;