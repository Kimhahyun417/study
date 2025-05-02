#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <math.h>
#include <tuple>
#include <Windows.h>
using namespace std;


const int ROW = 20;
const int COL = 20;


struct Node {
	int x, y;
	int move = 0;
	int dist = 0;
	int shape = 0;  // 0 기본 1 탐색 2 이동
	int sum = INT_MAX;
};

struct Player
{
	int x = 9;
	int y = 6;
};

class Astar
{
public:
	Node grid[COL][ROW];
	priority_queue<tuple<int, int, int, int>, vector<tuple<int, int, int, int>>, greater<>> pq;
	Player player;
	

	int startX = 1, startY = 1;
	int targetX = 9, targetY = 6;
public:
	void research();
	int dist(int Dx, int Dy);
	int abs(int num);

	void playerMove();

public:
	void SetPosition(int x, int y);
	void setConsoleColor(int color);
	void Show();
	void ShowNum();
public:
	Astar();

};

