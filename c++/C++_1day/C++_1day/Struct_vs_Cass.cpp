#include<iostream>

struct MyStruct //기본값 public
{
private:
	int num;

public:
	void Test()
	{
		num = 12;
	}
};

class MyClass  //기본값 private
{
	int num;
	//생성자소멸자
	MyClass() {}  //생성될때 호출
	~MyClass() {} // 소멸될때 호출

};



int main()
{
	
	MyStruct s;
	

	//delete p;
	// c.num = 0;
	return 0;
}