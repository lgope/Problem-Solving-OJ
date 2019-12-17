#include<stdio.h>
int main()
{
   system("color A");
    int i, j, k;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf(" ");
        for(k = i; k >= 1; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
