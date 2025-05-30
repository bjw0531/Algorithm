#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <numeric>
using namespace std;

int N;
priority_queue<int, vector<int>, greater<int>> a;
vector<int> b;
int result;

int main()
{
	cin >> N;
	for (int i = 0, x; i < N; i++)
	{
		cin >> x;
		a.push(x);
	}

	for (int i = 0; i < N; i++)
	{
		int elem = a.top();
		a.pop();
		b.push_back(elem);

		result += accumulate(b.begin(), b.end(), 0);
	}
	cout << result;

}