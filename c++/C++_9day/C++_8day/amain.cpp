#include "Deque.h"
#include <Windows.h>
int main()
{
	int key =0;
	int b = 0;
	Deque deque;
	while (true)
	{
		system("cls");
		deque.PrintAll();
		cout << "ÃÑ °¹¼ö: " << deque.Count() << endl;
		cout << "1:PsFr 2:PsBa 3:PoFr 4:PoBa 5:Cle 6:count" << endl;

		cin >> key;
		switch (key)
		{
		case 1:
			b++;
			deque.Push_Front(b);
			break;

		case 2:
			b++;
			deque.Push_Back(b);
			break;

		case 3:
			cout << "¹èÃâ°ª:" << deque.Pop_Front() << endl;
			break;

		case 4:
			cout << "¹èÃâ°ª:" << deque.Pop_Back() << endl;
			break;

		case 5:
			b = 0;
			deque.Clear();
			break;

		case 6:
			
			break;
		default:
			break;
		}

	}



}