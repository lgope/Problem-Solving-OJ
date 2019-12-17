#include<stdio.h>
int main()
{
  system("color A");
  int i,j,rows;
  printf("Enter Number of rows:");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++)
  {
    for(j=i;j<=rows;j++)
    {
      printf("*");
    }
    printf("\n");
  }

}
