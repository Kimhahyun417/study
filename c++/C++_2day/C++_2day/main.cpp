#include <iostream>

using namespace std;

class Animal
{
public:
	char a;
	char b;

};
class Cat : public Animal
{
public:
	char c;
	char d;

};
//[  Cat     ]
//[Ani ]
//[a][b][c][d]
int main()
{
	Animal* p = new Cat;

	//[Ani ]
	//[a][b][c][d]

	printf("a : %p\n", &p->a);
	printf("b : %p\n", &p->b);
	//printf("c : %p\n", &p->c);
	//printf("d : %p\n", &p->d);
	
	return 0;
}

