#include<stdio.h>

int c[5000];
int a[5000];

int main()
{
    int n, m, i, j, res, count;

    scanf("%d%d", &n, &m);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &c[i]);
    }

    for(j = 0; j < m; j++)
    {
        scanf("%d", &a[j]);
    }

    i = 0, j = 0, count = 0;

    while(i < n)
    {
        if(c[i] <= a[j])
        {
            j++;
            count++;
        }

        i++;
    }

    printf("%d\n", count);

    return 0;
}
