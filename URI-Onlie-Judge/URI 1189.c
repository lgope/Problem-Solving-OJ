#include<stdio.h>

int main()
{
    int i, j, k, l, n = 11, p = 1;
    double sum = 0.0, a[12][12];

    char ch[2];
    scanf("%s", &ch);

    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    for(k = 0; k < 5; k++)
    {
        for(l = p; l < n; l++)
        {
            sum += a[l][k];
        }
        n--;
        p++;
    }

    if(ch[0] == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum/30.0);

    return 0;
}





