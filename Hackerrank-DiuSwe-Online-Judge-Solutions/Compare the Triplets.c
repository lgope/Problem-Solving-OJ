#include<stdio.h>

int main()
{
    int a[3], b[3], i, j, count = 0, plus = 0 ;

    for(i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    for(j = 0; j < 3; j++)
    {
        scanf("%d", &b[j]);
    }

    for(i = 0; i < 3; i++)
    {
        for(j = i; j <= i; j++)
        {
            if(a[i] > b[j])
            {
                count++;
            }
            if(a[i] < b[j])
            {
                plus++;
            }
        }
    }
    printf("%d %d\n", count, plus);

    return 0;
}
