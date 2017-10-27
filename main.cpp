#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include"Position.h"
#include"cLiving.h"
#include"cTiles.h"
#include"cWorld.h"
#include<utility>

/*
#define UP        0x48
#define DOWN   0x50
#define LEFT     0x4B
#define RIGHT   0x4D
*/

using namespace std;
int newX;
int newY;
int newZ;
enum newDir;
int pushButton;

void moving(int x, int y, enum eDir d) {
	pair<int, int> newC;
	newC = make_pair(x, y);
	cLiving oPlayer;
	cout << newC.first << ", " << newC.second << " Inuti moving i main" << endl;
}

int main()
{
	cLiving player;
	cWorld world;
	int x = 0;
	int y = 0;
	int z = 0;
	int pushButton = 9;
	eDir dir;
	int anotherx = 0;
	int anothery = 0;

	world.iterateTiles(9, 9);

	// USE A POINTER WHENEVER YOU DONT WANT TO INITIALIZE A VALUE at declaration
	// "should use pointers if you dont want to have to initialize at declaration."	
	// USE REFERENCE WHEN YOU WANT TO INITIALIZE A VALUE

	cout << endl;
	cout << "Our Starting Position is: " << player.position() << endl;

	while (pushButton != 0) {

		cout << "Push 1-4: ";
		cin >> pushButton;
		cout << endl;

		switch (pushButton)
		{
		case 1:
			dir = LEFT;
			break;
		case 2:
			dir = UP;
			break;
		case 3:
			dir = RIGHT;
			break;
		case 4:
			dir = DOWN;
			break;
		default:
			break;
		}
		
		Position newPos = world.getNewPositionForMove(player.position(), dir);		
		if (world.validatePosition(newPos)) {
			cout << "Valid move!" << endl;
			player.updatePosition(newPos);
			cout << "Our new Position is: " << player.position() << endl << endl;
		}
		else {
			cout << "Not a valid move!" << endl;
		}		
	}
	cout << "this is the end" << endl; 	
}