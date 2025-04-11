#include <iostream>
using namespace std;

void Hanoi(int num, char from, char by, char to)
{
    if (num == 1) {
        cout << from << " -> " << to << endl;
        return;
    }
    
    // Step 1: n-1개를 보조 기둥으로 이동
    Hanoi(num - 1, from, to, by);

    // Step 2: 가장 큰 원판을 목적지 기둥으로 이동
    cout << from << " -> " << to << endl;

    // Step 3: 보조 기둥에 있는 n-1개를 목적지 기둥으로 이동
    Hanoi(num - 1, by, from, to);
}

int main()
{
    int num = 2;
    cout << "이동순서" << endl;
    Hanoi(num, 'A', 'B', 'C');

    return 0;
}