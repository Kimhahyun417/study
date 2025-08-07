#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); // 추가
	cin.tie(nullptr); // 추가

	int N =0, M;
	int max, min, sum, num;
	vector<int> vnum;
	cin >> N >> M;
	
	vnum.push_back(0);
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		vnum.push_back(num + vnum[i]); // 0 ! ! ! ! !
	
	}

	for (int i = 0; i < M;i++) {
		cin >> min >> max;
		sum = 0;
		sum = vnum[max] - vnum[min-1];
		cout << sum << "\n";
	}

}