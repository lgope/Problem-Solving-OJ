#include<stdio.h>
int main()
{
    int n , i, mul = 0;
    scanf("%d", &n);
    for(i = 1; i <= 10; i++)
    {
        mul = i * n;
        printf("%d x %d = %d\n", i, n, mul);
    }
    return 0;
}
