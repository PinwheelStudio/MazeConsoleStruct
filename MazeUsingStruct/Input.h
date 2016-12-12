#pragma once
#include <conio.h>
#include <Windows.h>
struct Input
{
	bool esc, up, down, left, right;
	Input();
	void getKey();
};
