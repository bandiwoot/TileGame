#include<iostream>
#include<string>
#include <vector>
#include <memory>
#include "Position.h"
#include "cLiving.h"
#include"cTiles.h"
#include<utility>

using namespace std;

cTiles::cTiles(int x, int y, int sNumber)
	: pos(x,y), number(sNumber)
{}


Position cTiles::TilesPosition() { 
	return pos;
}

void cTiles::printCoord() {
	pos.print();
}

cTiles::~cTiles()
{}
