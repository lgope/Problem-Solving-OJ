#include<stdio.h>

int main()
{
    int n, x, y, sum = 0;
    int i, j = 1;

    scanf("%d", &n);
    while(j <= n)
    {
        scanf("%d %d", &x, &y);
        if(x%2 == 0)x++;
        for(i = 1; i <= y; i++)
        {
            sum = sum + x;
            x = x + 2;
        }

        printf("%d\n", sum);
        sum = 0;
        j++;
    }

    return 0;
}
