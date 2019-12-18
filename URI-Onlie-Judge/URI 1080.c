#include<stdio.h>
int main()
{
    int n, h = 0, p, i;
    for(i = 1; i <= 100; i++)
    {
        scanf("%d", &n);
        if(h < n)
        {
            h = n;
            p = i;
        }
    }
    printf("%d\n%d\n", h, p);
    return 0;
}
