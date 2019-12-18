#include<stdio.h>
int main()
{
    int i, j = 0;
     float ave, n, m = 0;
    for(i = 1; i <= 6; i++)
    {
        scanf("%f", &n);
        if(n >= 0)
        {
            m += n;
            j++;
        }
    }
    ave = m / j;
    printf("%d valores positivos\n%.1f\n", j, ave);
    return 0;
}
