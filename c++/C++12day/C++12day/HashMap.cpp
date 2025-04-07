#include "HashMap.h"

void HashMap::Add(int key, int value)
{
    int tableNum = key % 10;
    Node* newNode = new Node{ key, value, nullptr };
    if (!table[tableNum])
    {
        table[tableNum] = newNode;
    }
    else
    {
        Node* temp = table[tableNum];

        while (temp->hashNext != nullptr)
        {
            temp = temp->hashNext;
        }
        temp->hashNext = newNode;
    }

  
    

}

int HashMap::GetValue(int key)
{
    int taV = key % 10;
    Node* temp = table[taV];
    while (temp)
    {
        if (temp->key == key)
        {
            return temp->data;
        }
        temp = temp->hashNext;
    }

    return 0;
   
}

void HashMap::Remove(int key) {
    int hashIndex = key % TABLE_SIZE;
    Node* temp = table[hashIndex];
    Node* prev = nullptr;

    while (temp) {
        if (temp->key == key) {
            if (prev) {
                prev->hashNext = temp->hashNext;
            }
            else {
                table[hashIndex] = temp->hashNext;
            }
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->hashNext;
    }
}

int HashMap::Count() {
    int count = 0;
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node* temp = table[i];
        while (temp) {
            count++;
            temp = temp->hashNext;
        }
    }
    return count;
}
void HashMap::Clear()
{
}

void HashMap::printAll() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << "Bucket " << i << ": ";
        Node* temp = table[i];
        while (temp) {
            cout << "[Key: " << temp->key << ", Value: " << temp->data << "] -> ";
            temp = temp->hashNext;
        }
        cout << "nullptr" << endl;
    }
}



HashMap::HashMap()
{
    table = new Node* [TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        table[i] = nullptr;
    }
}

HashMap::~HashMap()
{
   
}
