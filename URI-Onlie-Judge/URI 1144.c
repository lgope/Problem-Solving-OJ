#include<stdio.h>
#include<math.h>

int main()
{
    int n, i = 1, j, c = 1, sq, qb;

    scanf("%d", &n);

    while(c <= n*2)
    {
        while(i <= n)
        {
            j = 0, sq = 0, qb = 0;
            while(j < 2)
            {
                sq = pow(i, 2);
                qb = pow(i, 3);


                printf("%d %d %d\n", i, sq+j, qb+j);

                j++;
            }
            i++;
        }

        c++;
    }

    sq = 0, qb = 0;

    sq = pow(5, 2), qb = pow(5, 3);

    printf("\n%d %d\n", sq, qb);


    return 0;
}
