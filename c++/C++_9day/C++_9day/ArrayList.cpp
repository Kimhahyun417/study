#include "ArrayList.h"

void ArrayList::AddNode(int _data)
{
    int* temp = new int[count + 1];
    temp[count] = _data;


    if (!IsEmpty())
    {
        for (int i = 0; i < count; i++)
        {
            temp[i] = data[i];
        }

        delete[] data;

    }

    data = temp;

    count++;
}

void ArrayList::InsertNode(int _index, int _data)
{
    if (_index > count)
        return;

    int* temp = new int[count + 1];
    temp[_index] = _data; // 0 1 2 


    if (!IsEmpty())
    {

        for (int i = 0; i < _index; i++)
            temp[i] = data[i];

        for (int i = _index; i < count; i++)
            temp[i + 1] = data[i];
        delete[] data;

    }
    data = temp;

    count++;
}

void ArrayList::InsertNode(int _index, int _count, int _data)
{
    for (size_t i = 0; i < _count; i++)
    {
        InsertNode(_index, _data);
    }
}

void ArrayList::UpdateNode(int _index, int _data)
{
    if (_index > count)
        return;
    data[_index] = _data; 
}

void ArrayList::DeleteNodeData(int _data) //모두 제거
{

    

    if (IsEmpty())
    {
        delete[] data;
        count--;
    }
    else
    {

        for (int i = 0; i < count; i++)  // 동일 값  // 값 확인
        {
            if (data[i] == _data)
            {
                int* temp = new int[count - 1];
                for (int j = 0; j < i; j++)
                    temp[j] = data[j];
       
                for (int k = i; k < count - 1; k++)
                    temp[k] = data[k + 1];

                delete[] data;
                data = temp;
                count--;
                i = 0;
            }
        }

    }
    
}

void ArrayList::DeleteIndex(int _index)
{
    if (_index > count)
        return;
   

    if (IsEmpty())
    {
        delete[] data;
        count--;
    }
    else
    {
        int* temp = new int[count - 1];

        for (int j = 0; j < _index; j++)
            temp[j] = data[j];

        for (int k = _index; k < count - 1; k++)
            temp[k] = data[k + 1];

        delete[] data;
        data = temp;
        count--;
    }
   
}

void ArrayList::ClearAllNode()
{
    if (data != nullptr)
    {
        delete[] data;
        data = nullptr;

        count = 0;
    }
}

int ArrayList::GetNodeData(int _index)
{
    return data[_index];
}

int ArrayList::GetListSize()
{
    return count;
}

bool ArrayList::IsEmpty()
{
    return count == 0;
}

void ArrayList::PrintAll()
{
    if (count == 0)
        return;

    cout << "데이터 현황[";
    for (int i = 0; i < count; i++)
    {
        cout << data[i] << ":";
    }
    printf("]");
}

ArrayList::ArrayList()
{
    data = nullptr;
    count = 0;
}

ArrayList::~ArrayList()
{
    if (data != nullptr)
    {
        delete[] data;
        data = nullptr;
    }
}
