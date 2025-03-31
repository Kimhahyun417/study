#include "CircuList.h"
#include <Windows.h>
int main()
{
	int key = 0;
	int b = 0;
	CircularList Cir;
	while (true)
	{
		system("cls");

		Cir.PrintAll();
		cout << Cir.Count() << endl;
		cout << "1:PsFr 2:PsBa 3:PoFr 4:PoBa 5:Cle 6:count" << endl;

		cin >> key;
		switch (key)
		{
		case 1:
			b++;
			Cir.AddNode(b);
			break;
		case 2:
			b++;
			Cir.InsertNode(4, b);
			break;
			
		case 3:
			b++;
			Cir.UpdateNode(3, b);
			break;
		case 4:
			
			Cir.DeleteIndex(4);
			break;

		case 5:

			break;

		case 6:
			
			b = 0;
			break;
		default:
			break;
		}

	}

	Sleep(100);


}