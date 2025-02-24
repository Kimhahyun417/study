#pragma once
#include "Scene.h"


class Logo : public Scene
{
public:
	virtual void Init() { cout << "LOGO INIT" << endl; }
	virtual void Update() { cout << "LOGO UPDATE" << endl; }
};

