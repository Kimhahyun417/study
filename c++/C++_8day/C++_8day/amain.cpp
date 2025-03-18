#include "Queue.h"

int main()
{
	int a =0;
	int b = 0;
	Queue queue;
	while (true)
	{
		queue.ptr();
		cout << "1:CL 2:PUSH 3:COUNT 4:ISEM 5:Pop" << endl;

		cin >> a;
		switch (a)
		{
		case 1:
			queue.Clear();
			break;
		case 2:
			b++;
			queue.Enqueue(b);
			break;

		case 3:
			cout << queue.Count() << endl;


			break;
		case 4:
			cout << queue.IsEmpty() << endl;
			break;
		case 5:
			cout << queue.Dequeue() << endl;
			break;
		case 6:
			queue.ptr();
			break;
		default:
			break;
		}

	}



}