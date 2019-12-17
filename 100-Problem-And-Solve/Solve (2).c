#include<stdio.h>
int main()
{
  system("color A");
  int i,n;
  printf("Enter The Number Of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
    {
      printf("The Even numbers are %d\n",i);
    }

  }
}

