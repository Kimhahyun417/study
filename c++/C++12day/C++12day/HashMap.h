#pragma once
#include <iostream>

using namespace std;

#define TABLE_SIZE 10

struct  Node
{
	int key;
	int data;
	Node* hashNext;
};

class HashMap
{
private:
	int count = 0;
	Node** table = nullptr;
public:
	void Add(int key, int value);
	int GetValue(int key);
	void Remove(int key);
	int Count();
	void Clear();
	void printAll();
public:
	HashMap();
	~HashMap();
};
