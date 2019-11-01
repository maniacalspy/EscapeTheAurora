#pragma once

#include "LevelGridStruct.h"

extern bool* Level_One_Grid = new bool[12]{ 
	true, true, true,
	true, true, true,
	true, true, true,
	true, true, true 
};
extern LevelGrid Level_One = LevelGrid(4, 3, 1, 1, new int[2]{ 3,1 }, new int[2]{ 0,1 }, Level_One_Grid);

LevelGrid::LevelGrid(int rows, int columns, int startspots, int goalspots, int* startpositions, int* goalpositions, bool* grid)
{
	RowCount = rows;
	ColumnCount = columns;
	StartSpots = startspots;
	GoalSpots = goalspots;
	StartCoordinates = startpositions;
	GoalCoordinates = goalpositions;
	thisGrid = grid;
}