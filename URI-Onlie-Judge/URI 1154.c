#include<stdio.h>

int main()
{
    int n,sum = 0;
    double  j = 0,avg;

    while(1)
    {
        scanf("%d", &n);

        if(n < 0)break;
        sum = sum + n;
        j++;
    }

    avg = sum / j;
    printf("%.2lf\n", avg);


    return 0;
}
