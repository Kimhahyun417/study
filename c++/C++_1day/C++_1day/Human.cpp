#include<iostream>

struct Human
{
	const char* name;
	int age;
	float weight;
	float height;

	void Eat()
	{
		std::cout << "밥을 먹고" << std::endl;
	}

	void Poo()
	{
		std::cout << "화장실을 가고" << std::endl;
	}void Sleep()
	{
		std::cout << "잠을 잡니다" << std::endl;
	}
};


int bmain()
{
	Human human;
	human.name = "TEST";
	human.age = 1;
	human.height = 50.0f;
	human.weight = 10.0f;
	human.Eat();
	
	std::cout << human.name << "의 나이" << human.age << std::endl;
	return 0;
}