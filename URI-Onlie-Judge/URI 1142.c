#include<stdio.h>

int main()
{
    int n, r, a = 1, b = 2, c = 3;

    scanf("%d", &n);

    for(r = 1; r <= n; r++)
    {
        printf("%d %d %d PUM\n", a, b, c);
        a += 4;
        b += 4;
        c += 4;
    }

    return 0;
}
