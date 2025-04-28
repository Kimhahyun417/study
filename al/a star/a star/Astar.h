#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <math.h>
#include <tuple>

using namespace std;


const int ROW = 10;
const int COL = 7;


struct Node {
	int x, y;
	int move = 0;
	int dist = 0;
	int shape = 0; 
	int sum = 0;
};


class Astar
{
public:
	Node grid[COL][ROW];
	int startX = 1, startY = 1;
	int targetX = 8, targetY = 5;
public:
	void research();
	int dist(int Dx, int Dy);
	int abs(int num);
public:
	void Show();
public:
	Astar();

};

