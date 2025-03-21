#include "SingleList.h"

void SingleList::AddNode(int _data)
{
    Node* newNode = new Node{ _data, nullptr };
    if (!head)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while (temp->next) //끝값이 널일때 까지 반복
        {
            temp = temp->next; // 연결해서 연결
        }
        temp->next = newNode; 
    }
    count++;
}
void SingleList::InsertNode(int _index, int _data)
{
}

void SingleList::UpdateNode(int _index, int _data)
{
}

void SingleList::DeleteNodeData(int _data)
{
}

void SingleList::DeleteIndex(int _index)
{
}

void SingleList::ClearAllNode()
{
}

int SingleList::GetNodeData(int _index)
{
    return 0;
}

int SingleList::GetListSize()
{
    return 0;
}

bool SingleList::IsEmpty()
{
    return false;
}

void SingleList::PrintAll()
{
    Node* temp = head;
    while (temp)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

SingleList::~SingleList()
{
}
