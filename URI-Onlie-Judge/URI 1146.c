#include<stdio.h>

int main()
{
    int x, i;

    while(1)
    {
        scanf("%d", &x);
        if(x == 0)break;

        printf("1");
        for(i = 2; i <= x; i++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }

    return 0;
}
