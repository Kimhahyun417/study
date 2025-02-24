
#include "Enemy.h"

void Enemy::Init()
{
	x = rand() % 30;
	y = rand() % 30;
	shape = "º¿";
}

void Enemy::Update()
{
	int dir = rand() % 4;
	switch (dir)
	{
	case 0:
		x--;
		break;
	case 1:
		x++;
		break;
	case 2:
		y--;
		break;
	case 3:
		y++;
		break;
	default:
		break;
	}
}
