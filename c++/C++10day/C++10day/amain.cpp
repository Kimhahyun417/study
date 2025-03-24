#include "SingleList.h"
#include <Windows.h>
int main()
{
	int key = 0;
	int b = 0;
	SingleList Single;
	while (true)
	{
		system("cls");
		
		Single.PrintAll();
		cout << "1:PsFr 2:PsBa 3:PoFr 4:PoBa 5:Cle 6:count" << endl;

		cin >> key;
		switch (key)
		{
		case 1:
			b++;
			Single.AddNode(b);
			
			break;
		case 2:
			b++;
			Single.InsertNode(2, b);
			break;
			b++;
		case 3:
			Single.UpdateNode(2, b);
			break;
		case 4:
			Single.DeleteNodeData(2);
			
			break;

		case 5:
			Single.DeleteIndex(2);
			
			break;

		case 6:
			Single.ClearAllNode();
			b = 0;
			break;
		default:
			break;
		}

	}

	Sleep(100);


}