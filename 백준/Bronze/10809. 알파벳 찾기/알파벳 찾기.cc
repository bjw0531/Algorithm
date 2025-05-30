#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;



int main()
{
	char arr[105];
	scanf("%s",arr);

	for(char i = 'a'; i <= 'z'; i++)
	{
		int idx = -1;
		for(int j = 0; arr[j]; j++)
		{
			if(arr[j] == i)	
			{
				idx = j;
				break;
			}
		}
		printf("%d ",idx);
	}
}