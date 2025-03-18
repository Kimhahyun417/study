#pragma once
#include <iostream>

using namespace std;
#define MaxCount 5 
class Stack
{
private:
	//해당 배열을 가르키는 포인터
	//해당 배열의 주소를 담는 포인터
	int data[MaxCount];	  //data = new int[크기값]; data = nullptr;
	//data = [10]; push(10); [10] 새로운 공간에 옮겨주고	<- 지워주고 [10] delete data;
	//data = [10][20]; push(20); [10][20] 새로운 공간에 옮겨주고 <-지워주고 [10][20] delete data;
	//data = [10][20][30]; push(30); // 새로운 공간을 가르키게
	//데이터 갯수
	int index = 0;
public:
	//자료를 지워주는 함수
	void Clear();
	//몇개인지 알려주는 함수
	int Count();
	//비어 있는지 아닌지 알려주는 함수
	bool IsEmpty();
	//값을 넣어주는 함수(_data)
	bool Push(int _data);
	//값을 빼주는 함수
	//빼면서 값을 반환
	int Pop();
	int Pick();
public:
	Stack();
	~Stack();
};


