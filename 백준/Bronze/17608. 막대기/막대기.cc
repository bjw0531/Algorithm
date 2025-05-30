#include <stdio.h>
using namespace std;

int N;
int arr[100005];
int max = -1;
int cnt = 0;

int main()
{
	scanf("%d",&N);
	for(int i = 1; i <= N; i++)	scanf("%d", &arr[i]);
	for(int i = N; i >= 1; i--)
	{
		if(arr[i] > max)
		{
			cnt++;
			max = arr[i];
		}
	}
	printf("%d",cnt);
}