#pragma once
#include<iostream>
#include<string>
#include <vector>
#include <memory>
#include "Position.h"
#include "cLiving.h"
#include"cTiles.h"
#include<utility>

enum eDir { STOP = 0, LEFT = 1, UP = 2, RIGHT = 3, DOWN = 4 };

class cWorld
{
private:
	vector<unique_ptr<cTiles>> tileVector;
public:
	cWorld();
	Position getNewPositionForMove(const Position &pos, eDir dir) const;
	unique_ptr<cTiles> cWorld::makeTile(int x, int y, int z);
	void cWorld::iterateTiles(int a, int b);
	bool cWorld::validatePosition(Position &position);
	~cWorld();
};

