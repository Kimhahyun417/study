#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <math.h>

using namespace std;


const int ROW = 7;
const int COL = 14;


struct Node {
	int x, y;
	int move = 0;
	int dist = 0;

};

Node grid[COL][ROW];

class Astar
{
	int targetX = 8, targetY= 5;
	int dist(int Dx, int Dy);
	int abs(int num);
public:
	Astar();

};

