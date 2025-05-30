#include <stdio.h>
#include <string.h>

int main()
{
	char arr[51];
	int height = 0;

	scanf("%s", arr);

	if (arr[0] == '(' || arr[0] == ')')
	{
		height += 10;
	}

	for (int i = 1; i < (int)strlen(arr); i++)
	{
		if (arr[i-1] == '(' && arr[i] == ')')
		{
			height += 10;
		}
		else if (arr[i - 1] == ')' && arr[i] == '(')
		{
			height += 10;
		}
		else if (arr[i] == '(' || arr[i] == ')')
		{
			height += 5;
		}

	}
	printf("%d", height);
}
