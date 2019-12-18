#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, N[10];

    scanf("%d", &n);

    for(i = 0; i < 10; i++)
    {
        N[i] = n;
        n += n;

    }

    for(i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
