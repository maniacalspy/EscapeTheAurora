#pragma once

#include "LevelGridStruct.h"

extern TT_tileTypes Level_One_Grid[12] = {
	TT_tileTypes::Basic, TT_tileTypes::Goal, TT_tileTypes::Basic,
	TT_tileTypes::Basic, TT_tileTypes::Basic, TT_tileTypes::Basic,
	TT_tileTypes::Basic, TT_tileTypes::Basic, TT_tileTypes::Basic,
	TT_tileTypes::Basic, TT_tileTypes::Start, TT_tileTypes::Basic
};

LevelGrid* Level_One = new LevelGrid(4, 3, 1, 1, new int[2]{ 3,1 }, new int[2]{ 0,1 }, Level_One_Grid);

LevelGrid::LevelGrid(int rows, int columns, int startspots, int goalspots, int* startpositions, int* goalpositions, TT_tileTypes* grid)
{
	RowCount = rows;
	ColumnCount = columns;
	StartSpots = startspots;
	GoalSpots = goalspots;
	StartCoordinates = startpositions;
	GoalCoordinates = goalpositions;
	thisGrid = grid;
}

LevelGrid* GetLevelByNumber(int levelnumber) {
	switch (levelnumber) {
	case 1:
		return Level_One;
		break;
	default:
		return nullptr;
		break;
	}
}