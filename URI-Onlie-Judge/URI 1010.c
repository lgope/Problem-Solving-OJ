#include<stdio.h>
int main()
{
    int a, b, m, n;
    double x, y, result;
    scanf("%d %d %lf", &a, &b, &x);
    scanf("%d %d %lf", &m, &n, &y);
    result = (b * x) + (n * y);
    printf("VALOR A PAGAR: R$ %.2lf\n", result);
    return 0;
}
