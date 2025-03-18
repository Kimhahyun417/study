#include "Queue.h"

void Queue::Clear() //Á¦°Å
{
    if (data != nullptr)
    {
        delete[] data;
        data = nullptr;

        count = 0;
    }

}

int Queue::Count() // °¹¼ö
{
    return count;
}

bool Queue::IsEmpty() // ºñ¾îÀÖ´ÂÁö
{
    return count == 0;
}

void Queue::Enqueue(int _data) //ÀÎÇ²
{
    count++;
    
    int* temp = new int[count];
    temp[count - 1] = _data;


    if (!IsEmpty())
    {
        for (int i = 0; i < count - 1; i++)
        {
            temp[i] = data[i];
        }

        delete[] data;

    }

    data = temp;


}

int Queue::Dequeue() //¾Æ¿ôÇ²
{
    int num;
    count--;
    if (IsEmpty())
    {
        num = data[0];
        delete[] data;

    }
    else
    {
        int* temp = new int[count];  // 0 1 2 3   0 1 2
        for (int i = 0; i < count; i++)
        {
            temp[i] = data[i + 1];
        }
        num = data[1];
        delete[] data;
        data = temp;
    }

    return num;
}

void Queue::ptr()
{
    if (count == 0)
        return;

    for (int i = 0; i < count; i++)
    {
        cout << data[i] <<":";
    }
    printf("\n");

}

Queue::Queue()
{
    data = nullptr;
    count = 0;


}

Queue::~Queue()
{
    if (data != nullptr)
    {
        delete[] data;
        data = nullptr;
    }
}
