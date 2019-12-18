#include<stdio.h>

int main()
{
    int x, i, sum = 0;
    while(1)
    {
        scanf("%d", &x);
        if(x == 0)break;
        if(x%2 != 0)x++;
        for(i = 1; i <= 5; i++)
        {
            sum = sum + x;
            x = x + 2;
        }
        printf("%d\n", sum);

        sum = 0;
    }

    return 0;
}
