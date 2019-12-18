#include<stdio.h>

int main()
{
    int n, x, i, j = 1, flag = 0;

    scanf("%d", &n);
    while(j <= n)
    {
        scanf("%d", &x);
        for(i = 2; i < x; i++)
        {
            if(x%i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }

        j++;
        flag = 0;
    }

    return 0;
}
