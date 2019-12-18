#include<stdio.h>

int main()
{
    int x, z, i, c = 1, sum = 0;

    scanf("%d", &x);

    do
    {
        scanf("%d", &z);
    }
    while(x >= z);

    for(i = x; i < z; i++)
    {
        sum += i;

        if(sum > z)break;
        c++;
    }

    printf("%d\n", c);
}
