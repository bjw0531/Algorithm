#include <stdio.h>
#include <iostream>
using namespace std;

int N;
int result;
int cnt;


int main()
{
	cin >> N;

	while (1)
	{
		if (N % 5 == 0)
		{
			cnt += N / 5;
			break;
		}
		else
		{
			N -= 3;
			cnt++;
		}
		if (N <= 0)	break;
	}
	if (N < 0)	cnt = -1;

	cout << cnt;
}