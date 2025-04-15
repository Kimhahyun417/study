#include <iostream>
using namespace std;

#define SWAP(a,b) {int temp; temp = a; a = b; b = temp;}

void QuickSort(int* pNum, int left, int right);
void QQuickSort(int* pNum, int left, int right);
void ShellSort(int* pNum, int num);
void Show(int* pArray, int num);

void main()
{
	int array[10] = { 3,0,1,8,7,2,5,4,9,6 };
	QQuickSort(array, 0, 9);

}

void ShellSort(int* pNum, int num)
{
	for (int i = num /2; i > 0; i /= 2) // 5 2 1
	{
		for (int j = 0; j < num - i; j++)
		{
			
			if (pNum[j + i] < pNum[j])
			{
				SWAP(pNum[j+i], pNum[j]);
				

				if (pNum[j - num] > pNum[j] && j - num >= 0)
				{
					SWAP(pNum[j - num], pNum[j]);
				}
				
			}
		}
	}
	Show(pNum, num);
	//구현
}
void QuickSort(int* pNum, int left, int right)
{
	int lleft[10];
	int rright[10];
	int le = 0;
	int ri = 0;
	for (int i = 0; i < 10; i++)
	{
		if (pNum[left] > pNum[i])
		{
			lleft[le] = pNum[i];
			le++;
		}
		else
		{
			rright[ri] = pNum[i];
			ri++;
		}
	}

	
	QuickSort(lleft, 0, sizeof(lleft));
	QuickSort(rright, 0, sizeof(rright));

	Show(pNum, 10);
	//구현
}
void QQuickSort(int* pNum, int left, int right)
{
	if (left < right)
	{
		int pivot = pNum[left]; // 피벗을 맨 왼쪽 값으로 설정
		int i = left + 1;
		int j = right;

		while (i <= j)
		{
			while (i <= right && pNum[i] <= pivot) i++; // 피벗보다 큰 값 찾기
			while (j >= left && pNum[j] > pivot) j--;   // 피벗보다 작은 값 찾기

			if (i < j)
			{
				SWAP(pNum[i], pNum[j]); // 값 교환
			}
		}

		// 피벗을 자기 자리로 옮기기
		SWAP(pNum[left], pNum[j]);

		// 왼쪽, 오른쪽 부분 정렬 재귀 호출
		QuickSort(pNum, left, j - 1);
		QuickSort(pNum, j + 1, right);
	}
}


void Show(int* pArray, int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << pArray[i] << " ";
	}

	cout << endl;
}
