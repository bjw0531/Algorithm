#include <iostream>
using namespace std;

int main()
{
	int N,k;
	cin >> N;
	for (int i = 1; i <= 2 * N - 1; i++)
	{
		k = i;
		if (i > N)	k = 2*N - i;

		
		for (int j = 0; j < k; j++)	printf("*");
		for (int j = 0; j < 2 * N - 2 * k; j++)	printf(" ");
		for (int j = 0; j < k; j++)	printf("*");
		
		printf("\n");
	}
	/*
	181	1
	262	2
	343	3
	424	4
	505	5
	424	6 N = 5 i = 6 
	343	7
	262	8
	181	9
	*/
}