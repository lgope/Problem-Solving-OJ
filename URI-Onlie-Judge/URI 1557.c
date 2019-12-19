#include<stdio.h>

int main()
{
    int t, i, j;

    while(scanf("%d", &t) != 0)
    {

        for(i = 1; i <= t; i++)
        {
            for(j = 1; j <= t; j++)
            {
                printf("%d ", i*j);
            }

            printf("\n");
        }
    }

    return 0;
}
