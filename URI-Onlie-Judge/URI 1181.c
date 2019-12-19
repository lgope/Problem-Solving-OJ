#include<stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    double sum = 0.0, a[12][12];

    char ch[2];
    scanf("%s", ch);

    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf", &a[i][j]);

            if(i == n)
                sum += a[i][j];
        }
    }

    if(ch[0] == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if(ch[0] == 'M')
    {
        printf("%.1lf\n", sum/12.0);
    }

    return 0;
}
