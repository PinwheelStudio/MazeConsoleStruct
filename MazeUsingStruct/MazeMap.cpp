#include "MazeMap.h"

void MazeMap::loadFromFile(string fileName)
{
	ifstream in;
	in.open(fileName);
	in >> height >> width;

	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
		{
			char tmp;
			in >> tmp;
			if (tmp == 'p')
			{
				playerInitPosY = i;
				playerInitPosX = j;
				matrix[i][j] = '0';
			}
			else if (tmp == 'g')
			{
				goalPosY = i;
				goalPosX = j;
				matrix[i][j] = '0';
			}
			else
			{
				matrix[i][j] = tmp;
			}
		}
	}

	in.close();
}
