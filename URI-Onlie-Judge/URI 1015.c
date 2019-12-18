#include<stdio.h>
#include<math.h>
int main()
{
    double x1, y1, x2, y2, x, y, temp, Distance;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    x = x2 - x1;
    y = y2 - y1;
    temp = x * x + y * y;
    Distance = sqrt(temp);
    printf("%.4lf\n", Distance);
}
