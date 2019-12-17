#include<stdio.h>
int main()
{
  system("color A");
  int i,j,Rows;
  printf("Enter the number of Rows:");
  scanf("%d",&Rows);
  for(i=1;i<=Rows;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for(i=1;i<=Rows;i++)
  {
    for(j=i;j<=Rows;j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
