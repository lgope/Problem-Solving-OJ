#include<stdio.h>
#include<math.h>

int main()
{
    float x1, x2, y1, y2, a, b;
    float dis, res;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    a = x2 - x1;
    b = y2 - y1;

    dis = pow(a, 2) + pow(b, 2);
    res = sqrt(dis);

    printf("%.4f\n", res);

    return 0;
}
