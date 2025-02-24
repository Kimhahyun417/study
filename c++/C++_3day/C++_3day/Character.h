#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;

class Character
{
public:
	int x;
	int y;
	const char* shape;
private:
	void SetPosition(int x, int y);
public:
	void Render();
	virtual void Init() {}
	virtual void Update() {}
};

