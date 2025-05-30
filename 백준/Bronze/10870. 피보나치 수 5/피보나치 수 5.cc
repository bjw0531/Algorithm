#include<stdio.h>
int pib(int x)
{
    if(x == 0) return 0;
    if(x == 1) return 1;
    return pib(x-1) + pib(x-2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", pib(n));
}