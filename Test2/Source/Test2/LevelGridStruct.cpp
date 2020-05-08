#pragma once

#include "LevelGridStruct.h"

const int Level_Count = 4;

//for shortening array lengths
const auto Basic = TT_tileTypes::Basic;
const auto Goal = TT_tileTypes::Goal;
const auto Start = TT_tileTypes::Start;
const auto NT = TT_tileTypes::NonTraversable;


extern TT_tileTypes Level_One_Grid[4] = {
	Goal,
	Basic,
	Basic,
	Start
};
LevelGrid* Level_One = new LevelGrid(4, 1, 1, 1, Level_One_Grid);

extern TT_tileTypes Level_Two_Grid[6] = {
	Basic, Basic, Goal,
	Basic, Basic, Start
};
LevelGrid* Level_Two = new LevelGrid(2, 3, 1, 1, Level_Two_Grid);

extern TT_tileTypes Level_Three_Grid[15] =
{
	NT, Basic, Basic,
	NT, Basic, Basic,
	Start, Basic, Goal,
	Basic, Basic, NT,
	Basic, Basic, NT
};
LevelGrid* Level_Three = new LevelGrid(5, 3, 1, 1, Level_Three_Grid);

extern TT_tileTypes Level_Four_Grid[63] =
{
	Basic, Basic, Basic, Basic, Basic, Goal, Basic, Basic, Basic, 
	Basic, Basic, NT, Basic, Basic, Basic, NT, NT, Basic, 
	Basic, Basic, Basic, NT, NT, Basic, NT, NT, Basic, 
	Basic, NT, Basic, Basic, Basic, Basic, Basic, Basic, Basic, 
	NT, NT, Basic, NT, Basic, NT, NT, NT, Basic, 
	Basic, Basic, Basic, Basic, Basic,NT, NT, NT, Basic, 
	Basic, Basic, NT, Basic, Basic, Start, Basic, Basic, Basic

};
LevelGrid* Level_Four = new LevelGrid(7, 9, 1, 1, Level_Four_Grid);



LevelGrid::LevelGrid(int rows, int columns, int startspots, int goalspots, TT_tileTypes* grid)
{
	RowCount = rows;
	ColumnCount = columns;
	StartSpots = startspots;
	GoalSpots = goalspots;
	thisGrid = grid;
	thisState = nullptr;
}

LevelGrid::LevelGrid(int rows, int columns, int startspots, int goalspots, TT_tileTypes* grid, LevelGridState* state) : LevelGrid(rows, columns, startspots, goalspots, grid) {
	thisState = state;
}

LevelGridState::LevelGridState(float xonepos, float yonepos, float xtwopos, float ytwopos, bool solved) {
	LastTileOneXCoordinate = xonepos;
	LastTileOneYCoordinate = yonepos;

	LastTileTwoXCoordinate = xtwopos;
	LastTileTwoYCoordinate = ytwopos;

	isSolved = solved;
}
LevelGrid *Levels[Level_Count] = { Level_One, Level_Two, Level_Three, Level_Four};

LevelGrid* GetLevelByNumber(int levelnumber) {
	if (levelnumber > 0 && levelnumber <= Level_Count) return (Levels[levelnumber - 1]);
	else return nullptr;
}