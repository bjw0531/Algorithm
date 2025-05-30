#include <stdio.h>
int stair[305];
int mx[305];

int big(int x, int y)
{
    if(x > y)   return x;
    else        return y;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)  scanf("%d", &stair[i]);

    mx[1] = stair[1];
    mx[2] = big(stair[1] + stair[2], stair[2]);
    mx[3] = big(stair[1] + stair[3], stair[2] + stair[3]);
    for(int i = 4; i <= n; i++)	 mx[i] = big(mx[i-3] + stair[i-1] + stair[i], mx[i-2] + stair[i]);
    printf("%d", mx[n]);
}

