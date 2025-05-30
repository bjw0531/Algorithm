#include <stdio.h>

int main()
{
    int arr[31] = {0,};

    for(int i = 28, idx; i--;)
    {
        scanf("%d", &idx);
        arr[idx] = 1;
    }

    for(int i = 1; i <= 30; i++)
        if(!arr[i])   printf("%d\n", i);
}
