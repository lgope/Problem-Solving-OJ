#include<stdio.h>
int main()
{
  system("color A");
  int i,sum=0;
  for(i=101;i>=1;i-=2)
  {
    sum=sum+i;
  }
  printf("%d\n",sum);
}
