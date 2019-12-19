#include<stdio.h>

int main()
{
    double m, p, res = 0.0;

    scanf("%lf%lf", &m, &p);

    res = m / p;
    printf("%.2lf\n", res);

    return 0;
}
