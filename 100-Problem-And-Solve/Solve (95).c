#include<stdio.h>
int main()
{
  system("color A");
   int n,i;
   scanf("%d",&n);
   if(n==-1)
       return 0;
   else if(n>-32)
   {
       for(i=n;i>=-32;i--)
        printf("%d ",i);
   }
   else
   {
       for(i=n;i<=-32;i++)
        printf("%d ",i);
   }
   printf("\n");
}
