#include<stdio.h>

int main()
{
    int i, j, k, l, n = 1;
    double sum = 0.0, a[12][12];

    char ch[2];
    scanf("%s", ch);

    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    for(k = 11; k > 0; k--)
    {
        for(l = n; l < 12; l++)
        {
            sum += a[k][l];
        }

        n++;
    }

    if(ch[0] == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if(ch[0] == 'M')
    {
        printf("%.1lf\n", sum/66.0);
    }

    return 0;
}



