#include<stdio.h>

int main()
{
    int n, i, fib[100];

    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("0");
    for(i = 1; i < n; i++)
    {
        printf(" %d", fib[i]);
    }
    printf("\n");

    return 0;
}
