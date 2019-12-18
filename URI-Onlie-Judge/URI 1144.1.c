#include<stdio.h>

int main()
{
    int n, i = 1, j, c = 1, sq = 0, qb = 0;

    scanf("%d", &n);


    for(i = 1; i <= n; i++)
    {
        sq = i*i;
        qb = i*i*i;

        printf("%d %d %d\n", i, sq,qb);
        printf("%d %d %d\n", i, sq+1,qb+1);
    }


    return 0;
}

