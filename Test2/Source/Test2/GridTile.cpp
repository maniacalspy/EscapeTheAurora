
#include "GridTile.h"


GridTile::GridTile() : GridTile(TT_tileTypes::NonTraversable, TT_tileStates::Empty, 0,0) {

}

GridTile::GridTile(TT_tileTypes tiletype, TT_tileStates tilestate, float x, float y) : xPos(x), yPos(y) {
	this->type = tiletype;
	this->state = tilestate;
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
		if (state == TT_tileStates::Covered) validChange = true;
		break;

	case TT_tileStates::Covered:
		if (state == TT_tileStates::Empty) validChange = true;
		break;
	default:
		throw "Invalid state, you likely added a new state and forgot to update this function";
		break;
	}
	if (validChange) state = tilestate;
}

void GridTile::setTileType(TT_tileTypes tiletype) {
	this->type = tiletype;
}
