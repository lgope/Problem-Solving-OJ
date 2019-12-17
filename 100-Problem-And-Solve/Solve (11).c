#include<stdio.h>
int main()
{
  system("color A");
  int i,n,sum=0;
  printf("Enter The Number Of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i%2!=0)
    {
      printf("%d\n",i);
    sum+=i;
    }
  }
  printf("The total sum of the all odd Number is:%d\n",sum);
}



