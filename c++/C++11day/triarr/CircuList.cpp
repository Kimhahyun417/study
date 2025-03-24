#include "CircuList.h"

void CircularList::AddNode(int _data)
{
    Node* newNode = new Node{ _data, nullptr }; // 신규노드 생성
    
    if (!tail) // 꼬리가 비었으면
    {
        newNode->next = newNode;
        tail = newNode;
    }
    else
    {
        Node* temp = tail; // 두번째 tail
      
        while (temp->next != tail)
        {
            temp = temp->next;
        }
   
        temp->next = newNode;
        newNode->next = tail;
       
    }
    count++;
}

void CircularList::InsertNode(int _index, int _data)
{
    if (_index > count)
        return;
    Node* newNode = new Node{ _data, nullptr };
    

    Node* temp = tail;    
    for (int i = 0; i < _index- 2; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    count++;
}

void CircularList::UpdateNode(int _index, int _data)
{
    Node* temp = tail;
    for (int i = 0; i < _index - 1; i++)
    {
        temp = temp->next;
    }
    temp->data = _data;
}

void CircularList::DeleteNodeData(int _data)
{
}

void CircularList::DeleteIndex(int _index)
{
    // 사이 값 제거
    Node* temp = tail;

    if (_index == count)
    {
        for (int i = 0; i < _index - 2; i++)
        {
            temp = temp->next;
        }
        temp->next = tail;
    }
    else
    {
        for (int i = 0; i < _index - 2; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }
   /* for (int i = 0; i < _index - 2; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;*/
    count--;
}

void CircularList::ClearAllNode()
{
}

int CircularList::GetNodeData(int _index)
{
	return 0;
}

bool CircularList::IsEmpty()
{
	return false;
}

void CircularList::PrintAll()
{
    Node* temp = tail;
    for (int i = 0; i < count * 2; i++)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
        if (i == count-1)
        {
            printf("\n");
        }
    }
    cout << "NULL" << endl;
}

int CircularList::Count()
{
	return count;
}

CircularList::CircularList()
{
}

CircularList::~CircularList()
{
}
