#include<stdio.h>

int main()
{
    int n, i, k;
    long long int fib[60];

    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i < 61; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d", &k);
        printf("Fib(%d) = %lld\n", k, fib[k]);
    }

    return 0;
}
