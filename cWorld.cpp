#include<iostream>
#include<string>
#include <vector>
#include <memory>
#include "Position.h"
#include "cLiving.h"
#include"cTiles.h"
#include "cWorld.h"
#include<utility>

using namespace std;

cWorld::cWorld()
{
}

Position cWorld::getNewPositionForMove(const Position& pos, eDir dir) const
{
	switch (dir)
	{
	case LEFT:
		return pos + Position(-1, 0);
		break;
	case UP:
		return pos + Position(0, 1);
		break;
	case RIGHT:
		return pos + Position(1, 0);
		break;
	case DOWN:
		return pos + Position(0, -1);
		break;
	default:
		throw runtime_error("Not a valid move direction");
		break;
	}
	return Position();
}

unique_ptr<cTiles> cWorld::makeTile(int x, int y, int z) {
	unique_ptr<cTiles> ptr;
	ptr = make_unique<cTiles>(x, y, z);
	ptr->printCoord();
	return ptr;
}

void cWorld::iterateTiles(int xco, int yco){
	int c(0);
	for (int a = 0; a < xco; ++a)
		{
			for (int b = 0; b < yco; ++b)
			{
				c++;
				tileVector.push_back(makeTile(a, b, c));
			}
		}
}

bool cWorld::validatePosition(Position &position) {
	for (auto const &tile : tileVector)
		if (tile->TilesPosition() == position)
			return true;
	return false;
}

cWorld::~cWorld()
{
}
