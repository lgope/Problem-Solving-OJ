/*#include<stdio.h>

int main()
{
    int i, j;
    double x, y, N[100];

    scanf("%lf", &x);

    for(i = 0, j = 0; i < 100; x /= 2, j++, i++)
    {
        N[j] = x;

        printf("N[%d] = %.4lf\n", j, N[j]);
    }

    return  0;
}*/

#include <stdio.h>
int main()
{
    int array[100], n, a, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {

        for(i=0; i<5; i++)
        {
            scanf("%d", &array[i]);
            if(array[i]%2==0)
            {
                printf("par[%d] = %d\n", i, array[i]);
            }
            else
            {
                printf("impar[%d] = %d\n", i, array[i]);
            }
        }
    }
    return 0;
}
