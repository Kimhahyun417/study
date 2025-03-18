#include "stack.h"

void Stack::Clear()
{
    for (int i = 0; i < MaxCount; i++)
    {
        data[i] = 0;
    }

    index = 0;
   


}

int Stack::Count()
{
    return index;
}

bool Stack::IsEmpty()
{
    return index == 0;

}

bool Stack::Push(int _data)
{
    if (index >= MaxCount)
        return false;

    data[index] = _data;
    index++;
    return true;
}

int Stack::Pop()
{
    data[index] = 0;
    index--;
    return 0;
}

int Stack::Pick()
{
    return 0;
}
