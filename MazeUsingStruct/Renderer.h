#pragma once
#include <iostream>
#include <CoreWindow.h>
#include <wincon.h>
#include "MazeMap.h"
#include "Player.h"

struct Renderer
{
	void gotoxy(int x, int y);
	void txtColor(int color);
	void drawMap(MazeMap m);
	void drawPlayer(Player p);
	void erasePlayer(Player p);
	void drawGoal(MazeMap m);
};
