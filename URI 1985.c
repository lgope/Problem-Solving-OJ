#include<stdio.h>

int main()
{
    int n, p, q;
    double res = 0.0;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d%d", &p, &q);

        if(p == 1001)
            res += q * 1.50;
        else if(p == 1002)
            res += q * 2.50;
        else if(p == 1003)
            res += q * 3.50;
        else if(p == 1004)
            res += q * 4.50;
        else
            res += q * 5.50;
    }

    printf("%.2lf\n", res);

    return 0;
}
