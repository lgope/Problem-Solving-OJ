#include<stdio.h>

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
    {
        int result = n - 1;

        printf("%d\n", result);
    }

    return 0;
}
