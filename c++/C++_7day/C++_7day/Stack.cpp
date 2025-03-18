#include "Stack.h"

void Stack::Clear() //제거
{
    if (data != nullptr)
    {
        delete[] data;
        data = nullptr;

        count = 0;
    }

}

int Stack::Count() //갯수
{
    return count;
}

bool Stack::IsEmpty() //비었는지?
{
    return count == 0;
}

void Stack::Push(int _data) //값을 넣는
{
    count++;

    if (IsEmpty())
    {
        data = new int;
        *data = _data;
    }
    else
    {

        int* temp = new int[count];
        for (int i = 0; i < count - 1; i++)
        {
            temp[i] = data[i];
        }
        temp[count-1] = _data;

        delete[] data;
        data = temp;
    }
   
}

int Stack::Pop() //깂을 뺴는
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
            temp[i] = data[i];
        }
        num = data[count + 1];
        delete[] data;
        data = temp;
    }
   
    return num;
}

void Stack::ptr()
{
    if (count == 0)
        return;

    for (int i = 0; i < count; i++)
    {
        cout << data[i];
    }
    printf("\n");
    
   
}

Stack::Stack()
{
    data = nullptr;
    count = 0;
}

Stack::~Stack()
{
    if (data != nullptr)
    {
        delete[] data;
        data = nullptr;
    }
}
