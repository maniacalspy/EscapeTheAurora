#pragma once

#include "LevelGridStruct.h"

const int Level_Count = 2;

//for shortening array lengths
const auto Basic = TT_tileTypes::Basic;
const auto Goal = TT_tileTypes::Goal;
const auto Start = TT_tileTypes::Start;
const auto NT = TT_tileTypes::NonTraversable;


extern TT_tileTypes Level_One_Grid[12] = {
	Basic, Goal, Basic,
	Basic, Basic, Basic,
	Basic, Basic, Basic,
	Basic, Start, Basic
};

LevelGrid* Level_One = new LevelGrid(4, 3, 1, 1, Level_One_Grid);

extern TT_tileTypes Level_Two_Grid[36] = {
	Basic, Basic, Basic, Basic, NT, NT,
	NT, Basic, Basic, Basic, Goal, NT,
	NT, NT, Basic, Basic, Basic, Basic,
	NT, NT, NT, Basic, Basic, Basic,
	NT, NT, NT, NT, Basic, Basic,
	NT, NT, NT, NT, NT, Start
};

LevelGrid* Level_Two = new LevelGrid(6, 6, 1, 1, Level_Two_Grid);

LevelGrid::LevelGrid(int rows, int columns, int startspots, int goalspots, TT_tileTypes* grid)
{
	RowCount = rows;
	ColumnCount = columns;
	StartSpots = startspots;
	GoalSpots = goalspots;
	thisGrid = grid;
}

LevelGrid *Levels[Level_Count] = { Level_One, Level_Two };

LevelGrid* GetLevelByNumber(int levelnumber) {
	if (levelnumber > 0 && levelnumber <= Level_Count) return (Levels[levelnumber - 1]);
	else return nullptr;
}