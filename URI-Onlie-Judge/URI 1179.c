#include<stdio.h>

int main()
{
    int even[5], odd[5], n, i, j = 0, k = 0, l;

    for(i = 0; i < 15; i++)
    {
        scanf("%d", &n);

        if(n%2 == 0)
        {
            even[j] = n;
            j++;
            if(j == 5)
            {
                for(l = 0; l < 5; l++)
                {
                    printf("par[%d] = %d\n", l, even[l]);
                    even[l] = 0;
                    j = 0;
                }
            }
        }
        else
        {
            odd[k] = n;
            k++;
            if(k == 5)
            {
                for(l = 0; l < 5; l++)
                {
                    printf("impar[%d] = %d\n", l, odd[l]);
                    odd[l] = 0;
                    k = 0;
                }
            }
        }
    }

    for(i = 0; i < 5; i++)
    {
        if(odd[i] == 0)
            break;
        printf("impar[%d] = %d\n", i, odd[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(even[i] == 0)
            break;
        printf("par[%d] = %d\n", i, even[i]);
    }


    return 0;
}
