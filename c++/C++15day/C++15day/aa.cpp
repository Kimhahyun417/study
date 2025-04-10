#include "GameRoom.h"


int main()
{
	struct UserInfo user = { "kim", 2 , 3 };
	GameRoom game;
	cout << game.IsEmpty() << endl;
	game.AddUser(user);
	cout << game.IsEmpty() << endl;

}