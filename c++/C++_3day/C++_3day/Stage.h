#pragma once
#include "Scene.h"


class Stage : public Scene
{
public:
	virtual void Init() { cout << "Stage INIT" << endl; }
	virtual void Update() { cout << "Stage UPDATE" << endl; }
};

