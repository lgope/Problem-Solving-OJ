#include<stdio.h>

int main()
{
    int n, i, l = 0;
    scanf("%d", &n);

    int x[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int small = x[0];
    for(i = 0; i < n; i++)
    {
        if(small > x[i])
        {
            small = x[i];
            l = i;
        }
    }

    printf("Menor valor: %d\n", small);
    printf("Posicao: %d\n", l);

    return 0;
}
