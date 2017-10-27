#pragma once
#include<iostream>
#include<string>
#include <vector>
#include <memory>
#include<utility>

using namespace std;

class Position
{
private:
	int x_, y_;
	int newX, newY;
public:
	Position(int x = 0, int y = 0);
	void print() const;
	double getDistanceTo(const Position &other) const;
	void addX(const int x);
	void addY(const int y);
	Position operator+(const Position &other) const;
	bool operator==(const Position &other) const;
	int first();
	int second();
	~Position() = default;
	
	friend ostream& operator<<(ostream& os, const Position& pos);
};

inline ostream& operator<<(ostream& os, const Position& pos) {
	os << "Coordinates: " << pos.x_ << ", " << pos.y_;
	return os;
}

//favour composition over heritage


