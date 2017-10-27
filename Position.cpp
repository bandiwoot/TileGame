#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Position.h"
#include "cLiving.h"
#include "cTiles.h"
#include "cWorld.h"
#include <utility>
#include <math.h>

using namespace std;

Position::Position(int x, int y)
 : x_(x), y_(y)
{}

void Position::print() const
{
	cout << "Coordinates: " << x_ << ", " << y_ << endl;
}

double Position::getDistanceTo(const Position &other) const
{
	return sqrt((x_ - other.x_)^2 + (y_ - other.y_)^2);
}

void Position::addX(const int x)
{
	x_ += x;
}

void Position::addY(const int y)
{
	y_ += y;
}

int Position::first(){return x_;}
int Position::second() { return y_; }

Position Position::operator+(const Position & other) const
{
	return Position(x_ + other.x_, y_ + other.y_);
}

bool Position::operator==(const Position &other) const
{
	return x_ == other.x_ && y_ == other.y_;
}
