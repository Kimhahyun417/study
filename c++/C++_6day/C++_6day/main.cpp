#include <iostream>
#include <stack> // stl

using namespace std;

int main()
{

	stack<int> numbers;
	numbers.push(1);
	numbers.push(2);
	numbers.push(3);

	for (int i = 0; i < 3; i++)
	{
		cout << numbers.top() << endl;
		numbers.pop();
	}
}

