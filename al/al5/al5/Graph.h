#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <queue> // 우선순위 큐
#include <stack>

using namespace std;

struct Node
{
	int node;
	int cost;
	Node* next;
};

class Graph
{
private:
	int count = 0;
	bool* isVisited = nullptr;
	Node** graph = nullptr;
public:
	void InitializeGraph(int nodeCount);
	void AddEdge(int from, int to, int cost);
	void ShowGraphEdge(int node);
	bool VisitVertex(int node);
	void Dijikstra(int node);
	void DijikstraSTL(int node);
	int Getheight();
	int Getwidth();
private:
	Node* CreateNode(int data, int cost);
public:
	Graph() = default;
	~Graph();
};
