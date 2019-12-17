#include<stdio.h>
int main()
{
  system("color A");
    int i,j,count=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d ",i);
        count=0;
    }

    return 0;
}
