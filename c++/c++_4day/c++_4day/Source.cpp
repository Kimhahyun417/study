#include<iostream>

using namespace std;

template <typename T>
class A
{
public:
	T temp;
public:
	A<T>() {} // defualt »ı¼ºÀÚ
	A<T>(T data)
	{
		temp = data;
	}
	~A<T>() {}

};

void B(int &a)
{
	a = 10;
}

int main()
{
	A<int> a(1);   // T == int

	A<float> b(1.1f); // T == float

	A<char*> c(new char);	// T == char*

	int num =2;
	B(num);
	cout << num << endl;

}
