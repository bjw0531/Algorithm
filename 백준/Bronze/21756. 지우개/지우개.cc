#include <stdio.h>
#include <string.h>

int main()
{
	const int N = 101;
	int arr[N] = { 0 };
	int i;
	int flip = 0;
	int tmp;
	int num = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		arr[i] = i + 1;
	}

	while (arr[1] != 0) {

		for (i = 0; i < N; i++)
		{
			if (flip == 0)
			{
				arr[i] = 0;
				flip = !flip;
			}
			else if (flip == 1)
			{
				flip = !flip;
			}
		}




		for (i = 0; i < N; i++)
		{
			if (arr[i] != 0)
			{
				tmp = arr[i];
				arr[i] = arr[i / 2];
				arr[i / 2] = tmp;

			}
		}
		
		flip = 0;
	}

	printf("%d", arr[0]);
}