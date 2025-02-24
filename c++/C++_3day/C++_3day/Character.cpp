#include "Character.h"

void Character::SetPosition(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Character::Render()
{
	SetPosition(x, y);
	cout << shape;
}
