#include<iostream>

struct Obj
{
	int a;
	int b;

	void HelloWorld()
	{
		std::cout << "Hello World" << std::endl;
	}
};


int amain()
{
	Obj a;
	a.a = 12;
	a.b = 11;
	a.HelloWorld();

	return 0;
}