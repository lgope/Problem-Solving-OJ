#include<stdio.h>

int main()
{
    int n, i, num, res;

    while(scanf("%d", &n) != EOF)
    {
        int j = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &num);

            if(num > j)
                j = num;
        }

        if(j < 10)
        {
            res = 1;
        }
        else if(j >= 20)
        {
            res = 3;
        }
        else
        {
            res = 2;
        }

        printf("%d\n", res);
    }

    return 0;
}
