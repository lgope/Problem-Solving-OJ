#include<stdio.h>
int main()
{
    int m, n, i, temp, sum = 0;
    while(1)
    {
        scanf("%d %d", &m, &n);
        if(m <= 0 || n <= 0)break;
        if(m > n)
        {
            temp = n;
            n = m;
            m = temp;
        }
        for(i = m; i <= n; i++)
        {
            printf("%d ", i);
            sum = sum + i;
        }

        printf("Sum=%d\n", sum);
        sum = 0;
    }
    return 0;
}
