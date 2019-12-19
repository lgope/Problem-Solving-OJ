#include<stdio.h>

int main()
{
    int p, n, sub;
    scanf("%d%d", &p, &n);
    int a[n], i, flag = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++)
    {
        if(a[i] > a[i-1])
            sub = (a[i] - a[i-1]);
        else
            sub = (a[i-1] - a[i]);

        if(sub <= p)
            flag = 0;
        else
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }

    return 0;
}
