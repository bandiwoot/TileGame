#include<iostream>
#include<string>
#include <vector>
#include<iostream>
#include<string>
#include <vector>
#include <memory>
#include "Position.h"
#include "cLiving.h"
#include"cTiles.h"
#include"cWorld.h"
#include<utility>

using namespace std;

cLiving::cLiving()
	: pos(0,0), health(100)
{}
	
void cLiving::changeHealth(int H)
{}

const Position& cLiving::position() const
{
	return pos;
}

void cLiving::updatePosition(Position position) {
	pos = position;
}

cLiving::~cLiving()
{
}
