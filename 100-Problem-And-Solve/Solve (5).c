#include<stdio.h>
int main()
{
  system("color A");
  int i,n,j;
  printf("Enter The Number Of j:");
  scanf("%d",&j);
  printf("Enter The Number Of n:");
  scanf("%d",&n);
  for(i=j;i<=n;i++)
  {
    if(i%2!=0)
    {
     printf("The All odd number is:%d\n",i);
    }
  }
}


