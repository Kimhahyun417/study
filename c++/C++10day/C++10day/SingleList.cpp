#include "SingleList.h"

void SingleList::AddNode(int _data)
{
    Node* newNode = new Node{ _data, nullptr }; // 신규노드 생성
    if (!head) // 헤드가 비었으면
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
    Node* newNode = new Node{ _data, nullptr };
    Node* temp = head;
    for (int i = 0; i < _index-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    count++;
}

void SingleList::UpdateNode(int _index, int _data)
{
    Node* temp = head;
    for (int i = 0; i < _index-1; i++)
    {
        temp = temp->next;
    }
    temp->data = _data;
}

void SingleList::DeleteNodeData(int _data)
{
    Node* temp = head;
    for (int i = 0; i < count; i++)
    {
        if (temp->data == _data)
        {
            DeleteIndex(i);
            count--;
        }
        temp = temp->next;
    }

}

void SingleList::DeleteIndex(int _index)
{
    Node* temp = head;
    for (int i = 0; i < _index -1; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    count--;
}

void SingleList::ClearAllNode()
{
    head->next = nullptr;
}

int SingleList::GetNodeData(int _index)
{
    Node* temp = head;
    for (int i = 0; i < _index; i++)
    {
        temp = temp->next;
    }
   
    return temp->data;
}

int SingleList::GetListSize()
{
    return count;
}

bool SingleList::IsEmpty()
{
    return count++;
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
