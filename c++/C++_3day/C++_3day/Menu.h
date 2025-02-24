#pragma once
#include "Scene.h"

class Menu : public Scene
{
public:
	virtual void Init() { cout << "MENU INIT" << endl; }
	virtual void Update() { cout << "MENU UPDATE" << endl; }
};

