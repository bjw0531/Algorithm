#include <iostream>
using namespace std;

int main()
{
	int N,k;
	cin >> N;
	for (int i = 1; i <= 2 * N - 1; i++)
	{
		k = i - 1;
		if (i > N)	k = 2 * N - i - 1;

		
		for (int j = 0; j < k; j++)	printf(" ");
		for (int j = 0; j < 2 * (N-k) - 1; j++)	printf("*");
		
		printf("\n");
	}
}