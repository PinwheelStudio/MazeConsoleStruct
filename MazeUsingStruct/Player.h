#pragma once
#include "MazeMap.h"

struct Player
{
	void assignMap(MazeMap map);
	int posX, posY;
	MazeMap m;
	void initPos(int x, int y);
	bool canGoUp();
	bool canGoRight();
	bool canGoLeft();
	bool canGoDown();
	void goUp();
	void goRight();
	void goLeft();
	void goDown();
	bool reachTheGoal();
};