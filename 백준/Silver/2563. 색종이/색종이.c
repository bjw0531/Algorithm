#include <stdio.h>

int paper[101][101];
int n;

void fill(int x, int y)
{
    for(int i = 1; i <= 10; i++)
        for(int j = 1; j <= 10; j++)
            paper[y + i][x + j] = 1;
}

int main()
{
    int filled = 0;
    scanf("%d",&n);

    for(int i = 0, x, y; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        fill(x, y);
    }

    for(int y = 1; y <= 100; y++)
        for(int x = 1; x <= 100; x++)
            if(paper[y][x]) filled++;


    printf("%d", filled);
}
