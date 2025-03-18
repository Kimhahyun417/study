#include "Stack.h"

int main()
{
	int a;
	int b;
	Stack stack;
	while (true)
	{
		
		cout << "1:CL 2:PUSH 3:COUNT 4:ISEM 5:Pop" << endl;
		
		cin >> a;
		switch (a)
		{
		case 1:
			stack.Clear();
			break;
		case 2:
			stack.Push(3);
			break;
			
		case 3:
			cout << stack.Count() << endl;
			

			break;
		case 4:
			cout << stack.IsEmpty() << endl;
			break;
		case 5:
			stack.Pop();
			break;
		case 6:
			stack.ptr();
			break;
		default:
			break;
		}

	}



}