#include<stdio.h>

int main()
{
    int  t, r1, r2, sum, j = 1;

    scanf("%d", &t);

    while(j <= t)
    {
        scanf("%d %d", &r1, &r2);

        sum = r1 + r2;

        printf("%d\n", sum);
        sum = 0;
        j++;
    }

    return 0;
}
