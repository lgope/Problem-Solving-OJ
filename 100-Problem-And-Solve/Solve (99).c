#include<stdio.h>
int main()
{
  system("color A");
    int i,j,k,l,m,n;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",(j*i));
        }
        printf("\n");
    }
}
