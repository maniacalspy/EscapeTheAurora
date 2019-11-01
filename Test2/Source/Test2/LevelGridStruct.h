#pragma once

extern struct LevelGrid {	
	int RowCount;
	int ColumnCount;
	int StartSpots;
	int GoalSpots;
	int* StartCoordinates;
	int* GoalCoordinates;

	bool* thisGrid;

	LevelGrid(int rows, int columns, int startspots, int goalspots, int* startpositions, int* goalpositions, bool* grid);

};