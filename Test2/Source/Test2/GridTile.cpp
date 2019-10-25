
#include "GridTile.h"


GridTile::GridTile() {

}


void GridTile::setNeighbor(GridTile& neighbor, _tileDirections direction) {
	switch (direction)
	{
		
	case(_tileDirections::North):
		northNeighbor = &neighbor;
		break;
	case(_tileDirections::East):
		eastNeighbor = &neighbor;
		break;
	case(_tileDirections::South):
		southNeighbor = &neighbor;
		break;
	case(_tileDirections::West):
		westNeighbor = &neighbor;
		break;
	default:
		throw "Invalid direction";
		break;
	}
}

void GridTile::setTileState(TT_tileStates tilestate) {
	///Switch over which tile state to set to, and ensure that the current state allows for a valid transition
	bool validChange = false;
	switch (tilestate)
	{
	case TT_tileStates::Empty:
		if (thisTileState == TT_tileStates::BlockCovered) validChange = true;
		break;

	case TT_tileStates::BlockCovered:
		if (thisTileState == TT_tileStates::Empty) validChange = true;
		break;

	///This one isn't dependent on current state
	case TT_tileStates::CantTravel:
		validChange = true;
		break;

	case TT_tileStates::EmptyStart:
		if (thisTileState == TT_tileStates::BlockCoveredStart) validChange = true;
		break;

	case TT_tileStates::BlockCoveredStart:
		if (thisTileState == TT_tileStates::EmptyStart) validChange = true;
		break;

	case TT_tileStates::EmptyGoal:
		if (thisTileState == TT_tileStates::BlockCoveredGoal) validChange = true;
		break;

	case TT_tileStates::BlockCoveredGoal:
		if (thisTileState == TT_tileStates::EmptyGoal) validChange = true;
		break;

	default:
		throw "Invalid state, you likely added a new state and forgot to update this function";
		break;
	}
	if (validChange) thisTileState = tilestate;
}
