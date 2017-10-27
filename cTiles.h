#pragma once
#include<iostream>
#include<string>
#include <vector>
#include <memory>
#include "Position.h"
#include "cLiving.h"
#include<utility>

class cTiles
{
private:
	Position pos;
	int number;
public:
	cTiles(int x, int y, int sNumber);
	void printCoord();
	Position TilesPosition();
	~cTiles();
};

