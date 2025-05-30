#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	int i = 0, j;
	while (i < N)
	{
		j = 0;
		while (j < N - i - 1)
		{
			printf(" ");
			++j;
		}

		printf("*");

		j = 0;
		int k = (i > 0) * (2 * i - 1);
		while (j < k)
		{
			printf(" ");
			++j;
		}

		if (i)
			printf("*");

		printf("\n");
		++i;
	}
}