#include <stdio.h>

int main()
{
    long long n;

    scanf("%d", &n);


    if(n == 1)
        printf("1");
    else
    {
        for(long long i = 2, start; ; i++)
        {
            start = 1 + 1 + 6*((i-2)*(i-1) / 2);

            if(start > n)
            {
                printf("%d", i-1);
                break;
            }
        }
    }

}
