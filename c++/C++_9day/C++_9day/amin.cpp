#include "ArrayList.h"
#include <Windows.h>
int main()
{
	int key = 0;
	int b = 0;
	ArrayList Array;
	while (true)
	{
		system("cls");
		Array.PrintAll();
		cout << " °¹¼ö: " << Array.GetListSize() << endl;
		cout << "1:PsFr 2:PsBa 3:PoFr 4:PoBa 5:Cle 6:count" << endl;

		cin >> key;
		switch (key)
		{
		case 1:
			b++;
			Array.AddNode(b);
			break;

		case 2:
			b++;
			Array.InsertNode(2, b);
			break;
			b++;
		case 3:
			Array.InsertNode(2, 3, b);
			break;
			
		case 4:
			Array.DeleteNodeData(2);
			break;

		case 5:
			Array.DeleteIndex(3);
			b = 0;
			
			break;

		case 6:

			break;
		default:
			break;
		}

	}



}