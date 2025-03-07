#include <iostream>

using namespace std;

class Pet
{
public:
	int num;
};

class Human
{
public:
	char a;
	char b;
	Pet* pet = nullptr;
public:
	Human()
	{
		cout << "생성자" << endl;
	}
	Human(Human& other)
	{
		cout << "복사 생성자" << endl;
		a = other.a;
		b = other.b;

		//깊은 복사
		pet = new Pet;
		//pet = new Pet(*(other.pet));
		pet->num = other.pet->num;


	}

};

int main()
{
	Human a;

	a.a = 1;
	a.b = 2;
	a.pet = new Pet;  //[][][][]

	//Human b(a);
	Human b = a;
	//b.pet ?

	//delete a.pet;
	a.pet = nullptr;

	a.b = 12;
	//b.b ==?		

	//->xxxx 
	b.pet->num = 12;

	return 0;
}
[출처] Day16 | 작성자 ksw617