#include<stdio.h>
int main()
{
    int n, x, y, i, temp, j = 1, sum = 0;
    scanf("%d", &n);
    while(j <= n)
    {
        scanf("%d %d", &x, &y);
        if(x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        for(i = x+1; i < y; i++)
        {
            if(i%2 == 1)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
        sum = 0;
        j++;
    }
    return 0;
}
