#include<stdio.h>

int main()
{
    int n, i, l, m, k;

    while(scanf("%d", &n) != EOF)
    {
        l = 20;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &m);
            if(m < l)
            {
                l = m;
                k = i + 1;
            }
        }

        printf("%d\n", k);
        k = 0;
    }

    return 0;
}
