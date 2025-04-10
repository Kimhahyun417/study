#include <iostream>

using namespace std;
int resurt = 1;

void Hanoi(int num, char from, char to, char by);


int Factorial(int n)
{
    if (n == 0)
        return resurt;
   
    cout << "Factorial: " << n << endl;
    resurt *= n;
    n--;
    Factorial(n);
}

int main()
{
    /*int num = Factorial(5);
    cout << "Num :" << num << endl;*/
    int num = 3;
    //cin >> num;
    cout << "이동순서" << endl;
    Hanoi(num, 'A', 'B', 'C');


    return 0; // 1ac 2ab 1cb 3ac 1ba 2bc 1ac 
}

void Hanoi(int num, char from, char to, char by)
{
    
   
}
