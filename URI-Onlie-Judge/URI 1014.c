#include<stdio.h>
int main()
{
    int X;
    float Y, value;
    scanf("%d %f", &X, &Y);
    value = X / Y;
    printf("%.3f km/l\n", value);
    return 0;
}
