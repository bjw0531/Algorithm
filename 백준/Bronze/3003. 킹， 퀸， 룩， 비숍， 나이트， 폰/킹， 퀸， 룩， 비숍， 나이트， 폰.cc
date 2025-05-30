#include <iostream>

using namespace std;

int main()
{
    int a [6];
    for (int i = 0 ; i < 6 ; i ++)  scanf("%d", & a[i]);
    for (int i = 0; i < 2 ; i ++) printf("%d ", 1 - a[i]);
    for (int i = 2; i < 5; i ++) printf("%d ", 2 - a [i]);
    printf("%d", 8- a [5]);

    return 0;
}
