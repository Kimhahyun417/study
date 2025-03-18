#include "Deque.h"

void Deque::Push_Back(int num)
{

   

    int* temp = new int[count +1];
    temp[count ] = num;


    if (!isEmpty())
    {
        for (int i = 0; i < count ; i++)
        {
            temp[i] = data[i];
        }

        delete[] data;

    }

    data = temp;

    count++;
}

void Deque::Push_Front(int num)
{
    int* temp = new int[count + 1];
    temp[0] = num;


    if (!isEmpty())
    {
        for (int i = 0; i < count; i++)
        {
            temp[i+1] = data[i];
        }

        delete[] data;

    }

    data = temp;

    count++;
}

int Deque::Pop_Back()
{
    int num;

    if (isEmpty())
    {
        num = data[0];
        delete[] data;

    }
    else
    {
        int* temp = new int[count - 1];  // 0 1 2 3   0 1 2
        for (int i = 0; i < count - 1; i++)
        {
            temp[i] = data[i];
        }
        num = data[count -1];
        delete[] data;
        data = temp;
    }
    count--;
    return num;
    return 0;
}

int Deque::Pop_Front()
{
    int num;
   
    if (isEmpty())
    {
        num = data[0];
        delete[] data;

    }
    else
    {
        int* temp = new int[count-1];  // 0 1 2 3   0 1 2
        for (int i = 0; i < count-1; i++)
        {
            temp[i] = data[i + 1];
        }
        num = data[1];
        delete[] data;
        data = temp;
    }
    count--;
    return num;
   
}

bool Deque::isEmpty()
{
    return count == 0;
}

void Deque::Clear()
{
    if (data != nullptr)
    {
        delete[] data;
        data = nullptr;

        count = 0;
    }

}

int Deque::Count()
{
    return count;
}

void Deque::PrintAll()
{
    if (count == 0)
        return;

    cout << "데이터 상태 [";
    for (int i = 0; i < count; i++)
    {
        cout << data[i] << ":";
    }
    printf("]\n");
}

Deque::Deque()
{
    data = nullptr;
    count = 0;

}

Deque::~Deque()
{
    if (data != nullptr)
    {
        delete[] data;
        data = nullptr;
    }
}
