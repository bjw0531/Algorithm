#include <stdio.h>
#include <stdlib.h>

int main()
{

    int testnum;
    char ox[81];
    int score = 0, continuum = 1;

    scanf("%d", &testnum);

    for(int i = 1;i <= testnum;i++)
    {
        for(int j = 0;j <= 80;j++) ox[j] = 0;
        scanf("%s", ox);


        int score = 0, continuum = 1;

        for(int sex = 0;;sex++)
        {
            if(ox[sex] == 'O')
            {
                score += continuum;
                continuum += 1;
            }
            else if(ox[sex] == 'X')
            {
                continuum = 1;
            }
            else
            {
                break;
            }
        }
        printf("%d\n", score);
    }


    return 0;
}
