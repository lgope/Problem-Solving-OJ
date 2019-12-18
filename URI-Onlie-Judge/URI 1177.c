#include<stdio.h>

int main()
{
    int t, N[1000], i, a = 0;
    scanf("%d", &t);

    for(i = 0, a =0; i < 1000; a++, i++)
    {
        N[a] = a;
        if(N[a] == t)
        {
            a = 0;
        }

        printf("N[%d] = %d\n", i, N[a]);
    }

    return 0;
}
