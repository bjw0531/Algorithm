#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

bool isPrime(int n)
{
	if (n == 1)	return false;
	int flag = false;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)	flag = true;
	}
	return !flag;
}

int main()
{
	int N;
	cin >> N;
	for (int i = N, a; N--;)
	{
		cin >> a;
		v.push_back(a);
	}

	int cnt = 0;
	for (auto i : v)
	{
		if (isPrime(i))	cnt++;
	}
	cout << cnt;

}