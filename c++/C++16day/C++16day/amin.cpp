#include <iostream>

using namespace std;

//void Hanoi(int num, char from, char to, char by);
int Fact(int n);

int amain()
{
	
	//cout << Fact(5) << endl;
	int num;
	cout << "갯수 입력 : " << endl;
	cin >> num;
	cout << "하노이 타워의 이동 순서는 다음과 같습니다. " << endl;
	//Hanoi(num, 'A', 'C', 'B');

	return 0;
}


int Fact(int n)
{
	if (n == 0 || n==1) return 1;
	
	return n * Fact(n - 1);
}

//void Hanoi(int num, char from, char to, char by)


