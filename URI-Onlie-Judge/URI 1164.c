#include<stdio.h>

int main()
{
    int n, x, i, flag = 0;
    int j = 1,sum = 0;

    scanf("%d", &n);


    while(j <= n)
    {
        scanf("%d", &x);
        for(i = 1; i < x; i++)
        {
            sum += i;
            if(sum == x)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            printf("%d eh perfeito\n", x);
        }
        else
        {
            printf("%d nao eh perfeito\n", x);
        }

        j++;
        flag = 0;
        sum = 0;
    }


    return 0;
}
