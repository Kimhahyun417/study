#include "GameRoom.h"

bool GameRoom::AddUser(USER& userInfo)
{
	if (!IsFull())
	{
		vectorUsers.push_back(userInfo);
		return true;
	}

	return false;
}

bool GameRoom::DelUser(string name)
{
	for (auto index = vectorUsers.begin(); index != vectorUsers.end(); index++)
	{
		if (index->userName == name)
		{
			vectorUsers.erase(index);
			return true;
		}
	}
	return false;
}

bool GameRoom::IsEmpty()
{
	return vectorUsers.empty();
}

bool GameRoom::IsFull()
{
	return vectorUsers.size() > MAXUSER;
}

USER& GameRoom::GetUserInfo(string name) {
	for (auto& user : vectorUsers) {
		if (user.userName == name) {
			return user;
		}
	}
	throw std::runtime_error("User not found");
}

//USER& GameRoom::GetUserInfo(int index)
//{
//	// TODO: insert return statement here
//}
//
//USER& GameRoom::GetMasterUserInfo()
//{
//	// TODO: insert return statement here
//}
//
//USER& GameRoom::GetLastUserInfo()
//{
//	// TODO: insert return statement here
//}

bool GameRoom::BanUser(int index)
{
	return false;
}

void GameRoom::Clear()
{
}

int GameRoom::Count()
{
	return 0;
}

GameRoom::GameRoom()
{
	vectorUsers.reserve(MAXUSER);
}

GameRoom::~GameRoom()
{
}
