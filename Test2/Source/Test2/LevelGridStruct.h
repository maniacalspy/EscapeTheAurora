#pragma once
#include "Gridtile.h"

struct LevelGrid {	
	int RowCount;
	int ColumnCount;
	int StartSpots;
	int GoalSpots;
	int* StartCoordinates;
	int* GoalCoordinates;

	TT_tileTypes* thisGrid;

	LevelGrid(int rows, int columns, int startspots, int goalspots, int* startpositions, int* goalpositions, TT_tileTypes* grid);

};

LevelGrid* GetLevelByNumber(int levelnumber);


extern LevelGrid* Level_One;