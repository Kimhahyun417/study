#include "HashMap.h"
#include <Windows.h>
int main()
{
	int key = 0;
	int b = 0;
	HashMap hash;
	while (true)
	{
		system("cls");
		hash.printAll();
		cout << "1:PsFr 2:PsBa 3:PoFr 4:PoBa 5:Cle 6:count" << endl;

		cin >> key;
		switch (key)
		{
		case 1:
			b++;
			hash.Add(14+ 10*b, b);
			break;
		case 2:
			cout << "Ã£´Â°ª" << endl;
			cin >> key;
			cout << hash.GetValue(key) << endl;
			
			break;

		case 3:
			b++;
			hash.Remove(24);
			break;
		case 4:

			
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