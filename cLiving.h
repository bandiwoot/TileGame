#pragma once
#include<iostream>
#include<string>
#include <vector>
#include <memory>
#include "Position.h"
#include"cTiles.h"
#include "cWorld.h"
#include<utility>

using namespace std;

class cLiving
{
private:
	int intDir;
	Position pos;
	int health;
	eDir direction;
public:
	cLiving();
	void changeHealth(int);
	const Position& position() const;
	void cLiving::updatePosition(Position position);
	~cLiving();
};

