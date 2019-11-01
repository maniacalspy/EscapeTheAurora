#pragma once

#include "LevelGridStruct.h"

bool* Level_One_Grid = new bool[12]{ 
	true, true, true,
	true, true, true,
	true, true, true,
	true, true, true 
};
struct LevelGrid Level_One = LevelGrid(4, 3, 1, 1, new int[2]{ 3,1 }, new int[2]{ 0,1 }, Level_One_Grid);