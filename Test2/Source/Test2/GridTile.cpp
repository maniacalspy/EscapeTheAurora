
#include "GridTile.h"


GridTile::GridTile() : GridTile(TT_tileTypes::NonTraversable, TT_tileStates::Empty, 0,0) {

}

GridTile::GridTile(TT_tileTypes tiletype, TT_tileStates tilestate, float x, float y) : xPos(x), yPos(y) {
	this->type = tiletype;
	this->state = tilestate;
}

void GridTile::setNeighbor(GridTile* neighbor, _tileDirections direction) {
	switch (direction)
	{
		
	case(_tileDirections::North):
		northNeighbor = neighbor;
		if (neighbor->GetNeighbor(_tileDirections::South) != this) neighbor->setNeighbor(this, _tileDirections::South);
		break;
	case(_tileDirections::East):
		eastNeighbor = neighbor;
		if (neighbor->GetNeighbor(_tileDirections::West) != this) neighbor->setNeighbor(this, _tileDirections::West);
		break;
	case(_tileDirections::South):
		southNeighbor = neighbor;
		if (neighbor->GetNeighbor(_tileDirections::North) != this) neighbor->setNeighbor(this, _tileDirections::North);
		break;
	case(_tileDirections::West):
		westNeighbor = neighbor;
		if (neighbor->GetNeighbor(_tileDirections::East) != this) neighbor->setNeighbor(this, _tileDirections::East);
		break;
	default:
		//throw "Invalid direction";
		break;
	}
}

GridTile* GridTile::GetNeighbor(_tileDirections direction) {
	switch (direction)
	{

	case(_tileDirections::North):
		return this->northNeighbor;
		break;
	case(_tileDirections::East):
		return this->eastNeighbor;
		break;
	case(_tileDirections::South):
		return this->southNeighbor;
		break;
	case(_tileDirections::West):
		return this->westNeighbor;
		break;
	default:
		return nullptr;
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

float GridTile::GetXPosition() {
	return xPos;
}

float GridTile::GetYPosition() {
	return yPos;
}

TT_tileTypes GridTile::GetTileType() {
	return type;
}
