#include<stdio.h>

int main()
{
    int n, i, count = 0;

    scanf("%d", &n);
    int a[n];
    int max = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(max < a[i])
        {
            max = a[i];
        }
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == max)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
