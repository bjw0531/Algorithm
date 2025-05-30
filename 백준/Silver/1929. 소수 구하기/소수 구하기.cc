#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#define NUM 1000000
using namespace std;

vector<int> v;

bool arr[NUM + 5];


bool isPrime(int n)
{
	if (n == 1)	return false;
	int flag = false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)	flag = true;
	}
	return !flag;
}

void getPrime()
{
	arr[1] = true;
	for (int i = 2; i <= sqrt(NUM); i++)
	{
		if (isPrime(i))
		{
			for (int j = i; j <= NUM; j += i)
			{
				if (arr[j] == 0)	arr[j] = true;
				else			continue;
			}
			arr[i] = false;
		}
	}
}



int main()
{
	int S, E;
	cin >> S >> E;
	getPrime();
	
	for (int i = S; i <= E; i++)
	{
		if(arr[i] == 0)
			printf("%d\n", i);
	}
	return 0;
}