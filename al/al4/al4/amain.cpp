#include "PriorityQueue.h"

int main()
{
	PriorityQueue pq;
	pq.Push(3, 100);
	pq.Push(5, 200);
	pq.Push(1, 300);
	pq.Push(4, 400);

	while (!pq.IsEmpty())
	{
		Node n = pq.Pop();
		cout << "Priority: " << n.priority << ", Data: " << n.data << endl;
	}
	return 0;
}
