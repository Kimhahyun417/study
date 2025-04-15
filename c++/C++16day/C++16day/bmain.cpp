#include <iostream>

using namespace std;



int fibo(int n)
{
	cout << n << endl;
	if (n == 0) return 0;
	if (n == 1) return 1;

	return fibo(n - 1) + fibo(n - 2);
}

int main()
{

	fibo(3);
	

	return 0;
}