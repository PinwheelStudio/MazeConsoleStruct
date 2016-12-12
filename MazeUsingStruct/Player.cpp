#include "Player.h"

void Player::assignMap(MazeMap map)
{
	m = map;
}

void Player::initPos(int x, int y)
{
	posX = x;
	posY = y;
}

bool Player::canGoUp()
{
	if (posY - 1 >= 0 && m.matrix[posY - 1][posX] == '0')
		return true;
	return false;
}

bool Player::canGoRight()
{
	if (posX + 1 < m.width && m.matrix[posY][posX + 1] == '0')
		return true;
	return false;
}

bool Player::canGoLeft()
{
	if (posX - 1 >= 0 && m.matrix[posY][posX - 1] == '0')
		return true;
	return false;
}

bool Player::canGoDown()
{
	if (posY + 1 < m.height && m.matrix[posY + 1][posX] == '0')
		return true;
	return false;
}

void Player::goUp()
{
	--posY;
}

void Player::goRight()
{
	++posX;
}

void Player::goLeft()
{
	--posX;
}

void Player::goDown()
{
	++posY;
}

bool Player::reachTheGoal()
{
	return posX == m.goalPosX && posY == m.goalPosY;
}
