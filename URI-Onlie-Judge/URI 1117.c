#include<stdio.h>

int main()
{
    int j = 0;
    float n, k[3], avg;

    while(1)
    {
        scanf("%f", &n);
        if(n >= 0 && n <= 10)
        {
            k[j] = n;
            j++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(j > 1)break;
    }

    avg = (k[0] + k[1]) / 2.0;
    printf("media = %.2f\n", avg);

    return 0;
}
