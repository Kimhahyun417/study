#include "Player.h"
#include "Enemy.h"
#include "Npc.h"

#define Char_cout 3

Character* characters[Char_cout] = {};


int main()
{
	characters[0] = new Player;
	characters[1] = new Enemy;
	characters[2] = new Npc;
	for (int i = 0; i < Char_cout; i++)
	{
		characters[i]->Init();
	}

	while (true)
	{
		system("cls");
		for (int i = 0; i < Char_cout; i++)
		{
			characters[i]->Render();
			characters[i]->Update();
		}
		Sleep(50);
	}
}