#include "Renderer.h"

void Renderer::gotoxy(int x, int y)
{
	static HANDLE h = NULL;
	if (!h)
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);
}

void Renderer::txtColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE), color);
}


void Renderer::drawMap(MazeMap m)
{
	for (int i = 0; i < m.height; ++i)
	{
		for (int j = 0; j < m.width; ++j)
		{
			if (m.matrix[i][j] == '0' || m.matrix[i][j] == 'p' || m.matrix[i][j] == 'g')
			{
				cout << ' ';
			}
			else if (m.matrix[i][j] == '1')
			{
				cout << '#';
			}
			else
			{
				cout << ' ';
			}

		}
		cout << endl;
	}
}

//--
void Renderer::drawPlayer(Player p)
{
	gotoxy(p.posX, p.posY);
	cout << '@';
}

void Renderer::erasePlayer(Player p)
{
	gotoxy(p.posX, p.posY);
	cout << ' ';
}
//--

void Renderer::drawGoal(MazeMap m)
{
	gotoxy(m.goalPosX, m.goalPosY);
	cout << 'G';
}
