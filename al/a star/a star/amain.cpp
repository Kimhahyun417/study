#include "Astar.h"

int main()
{
	int a = 0;
    Astar astar;
	while (astar.startX != astar.player.x || astar.startY != astar.player.y)
	{
		system("cls");

		


		astar.research();
		astar.Show();
		astar.playerMove();
		astar.SetPosition(astar.player.x, astar.player.y);
		cout << "¤±";
		Sleep(100);
	}
    
}