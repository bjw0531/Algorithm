#include <iostream>
using namespace std;

int arr1[105][105];
int arr2[105][105];
int N,M;

int main()
{
	cin >> N >> M;
	for(int y = 1; y <= N; y++)
	{
		for(int x = 1; x <= M; x++)
		{
			int tmp;
			cin >> tmp;
			arr1[y][x] = tmp;
		}
	}	
	for(int y = 1; y <= N; y++)
	{
		for(int x = 1; x <= M; x++)
		{
			int tmp;
			cin >> tmp;
			arr2[y][x] = tmp;
		}
	}

	for(int y = 1; y <= N; y++)
	{
		for(int x = 1; x <= M; x++)
		{
			cout << arr1[y][x] + arr2[y][x] << ' ';
		}
		cout << endl;
	}
}
