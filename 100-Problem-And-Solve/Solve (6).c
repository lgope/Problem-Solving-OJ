#include<stdio.h>
int main()
{
  system("color A");
  int i,n;
  printf("Enter The Number Of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      printf("The factor of number is:%d\n",i);
    }
  }

}
