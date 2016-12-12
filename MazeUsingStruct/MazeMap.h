#pragma once
#include <string>
#include <fstream>
using namespace std;

struct MazeMap
{
	int width;
	int height;
	int playerInitPosX;
	int playerInitPosY;
	int goalPosX;
	int goalPosY;
	char matrix[100][100];
	void loadFromFile(string fileName);
};
