#include <Windows.h>

#include "Logo.h"
#include "Menu.h"
#include "Stage.h"

enum SCENE_ID
{
	LOGO,
	MENU,
	STAGE,
};

Scene* p = nullptr;

void SetScene(SCENE_ID id)
{
	if (p != nullptr)
	{
		delete p;
		p = nullptr;
	}

	switch (id)
	{
	case LOGO:
		p = new Logo;
		break;
	case MENU:
		p = new Menu;
		break;
	case STAGE:
		p = new Stage;
		break;
	default:
		break;
	}

	p->Init();

}

int amain() 
{
	SetScene(STAGE);

	while (true)
	{
		p->Update();

		if (GetAsyncKeyState(0x4C))
		{
			SetScene(LOGO);
		}
		if (GetAsyncKeyState(0x4D))
		{
			SetScene(MENU);
		}
		if (GetAsyncKeyState(0x53))
		{
			SetScene(STAGE);
		}
		Sleep(1000);
	}




}