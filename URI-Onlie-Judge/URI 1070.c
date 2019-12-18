#include<stdio.h>
int main()
{
    int i, n, j, k;
    scanf("%d", &k);
    k = k + 1;
    printf("%d\n", k);
    for(i = 1; i < 6; i = i + 1)
    {
        for( j = 1; j <= 1; j = j + 1)
        {
            k = k + 2;
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}

