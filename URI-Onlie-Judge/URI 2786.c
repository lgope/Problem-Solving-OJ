#include<stdio.h>

int main()
{
    int l, c, sum = 0;

    scanf("%d%d", &l, &c);

    sum = (l*c);
    sum += (l-1) * (c-1);
    printf("%d\n", sum);

    sum = 0;

    sum += (l-1) * 2;
    sum += (c-1) * 2;

    printf("%d\n", sum);

    return 0;
}
