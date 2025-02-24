#include "Npc.h"

void Npc::Init()
{
	x = rand() % 20;
	y = rand() % 20;
	shape = "¼Ú";
	
	minX = 5;
	maxX = 20;
	goleft = false;
}

void Npc::Update()
{
	if (goleft)
	{
		x--;
	}
	if (!goleft)
	{
		x++;
	}

	if (x < minX)
	{
		goleft = false;
	}
	if (x > maxX)
	{
		goleft = true;
	}
}
