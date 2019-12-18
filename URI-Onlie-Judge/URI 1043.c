#include<stdio.h>
int main()
{
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    if(A<B+C && B<A+C && C<A+B)
    {
        printf("Perimetro = %.1lf\n", A+B+C);
    }
    else
    {
        double D = 0.5 * (A+B) * C;
        printf("Area = %.1f\n", D);
    }
    return 0;
}
