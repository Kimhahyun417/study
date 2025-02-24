#pragma once
#include "Character.h"
class Npc : public Character
{
private:
	int minX;
	int maxX;
	bool goleft;
public:
	virtual void Init();
	virtual void Update();
};

