#include "PriorityQueue.h"

bool PriorityQueue::IsEmpty()
{
	return count == 0;
}

void PriorityQueue::Push(int _priority, int _data)
{
	heap[count].priority = _priority;
	heap[count].data = _data;

	int current = count;

	while (current > 0)
	{
		int parent = GetParentIndex(current);
		if (heap[current].priority > heap[parent].priority )
		{
			Swap(current, parent);
			current = parent;
		}
		else
		{
			break;
		}

	}
}

Node PriorityQueue::Pop()
{
	Node temp = heap[0];
	heap[0] = heap[count];

	int current = count;
	while (current > 0)
	{
		int parent = GetChildIndex(current);
		if (heap[current].priority < heap[parent].priority)
		{
			Swap(current, parent);
			current = parent;
		}
		else
		{
			break;
		}

	}

	return Node();
}

int PriorityQueue::Count()
{
	return count;
}

int PriorityQueue::GetChildIndex(int selfIndex)
{
	
	int left = GetLeftChildIndex(selfIndex);
	int right = GetRightChildIndex(selfIndex);

	if (left >= count)
		return -1; // 자식 없음
	if (right >= count)
		return left; // 오른쪽 없음

	// 더 우선순위 높은 쪽 반환
	if (heap[left].priority > heap[right].priority)
		return left;
	else
		return right;
}

int PriorityQueue::GetParentIndex(int selfIndex)
{
	return (selfIndex -1 )/ 2;
}

int PriorityQueue::GetLeftChildIndex(int selfIndex)
{
	return selfIndex * 2;
}

int PriorityQueue::GetRightChildIndex(int selfIndex)
{
	return selfIndex * 2 +1;
}

void PriorityQueue::Swap(int firstIndex, int secondIndex)
{
	Node temp = heap[firstIndex];
	heap[firstIndex] = heap[secondIndex];
	heap[secondIndex] = temp;
}

PriorityQueue::PriorityQueue()
{
}
