#include <iostream>
using namespace std;

#define SWAP(a,b) {int temp; temp = a; a = b; b = temp;}


void BubbleSort(int* pNum, int num);
void SelectionSort(int* pArray, int num);
void InsertSort(int* pArray, int num);
void ShellSort(int* pNum, int num);

void Show(int* pArray, int num);

void main()
{
	int array[10] = { 3,0,1,8,7,2,5,4,6,9 };
	ShellSort(array, 10);
}

void BubbleSort(int* pArray, int num)
{
	for (int i = 0; i < num-1; i++)
	{
		for (int j = 0; j < num-1; j++)
		{
			if (pArray[j] > pArray[j+1])
			{
				SWAP(pArray[j], pArray[j + 1]);
			}
			
		}
	}
	Show(pArray, num);
	
}

void SelectionSort(int* pArray, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1; j++)
		{
			if (pArray[j] > pArray[i])
			{
				SWAP(pArray[i], pArray[j]);
			}

		}
	}
	Show(pArray, num);
	//구현
}
void InsertSort(int* pArray, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		
		if (pArray[i] > pArray[i+1])
		{
			SWAP(pArray[i], pArray[i + 1]);
			int j = 1;
			while (pArray[i- j] > pArray[i + 1 -j])
			{
				SWAP(pArray[i - j] , pArray[i + 1 - j]);
				j++;
			}
		}
		
	}
	Show(pArray, num);
	//구현
}
void ShellSort(int* pArray, int num)
{
	for (int i = num ; i > 0 ; i /= 2) // 10 5 2 1
	{
		for (int j = 0; j < i; j++)
		{
			if (pArray[j] > pArray[j + num])
			{
				SWAP(pArray[j], pArray[j + num]);
			}
		}
	}
	Show(pArray, num);
	//구현
}






void Show(int* pArray, int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << pArray[i] << " ";
	}

	cout << endl;
}
