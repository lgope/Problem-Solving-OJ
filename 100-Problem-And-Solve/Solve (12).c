#include<stdio.h>
int main()
{
  system("color A");
  int i,j,rows;
  printf("Enter The Number of rows:");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }

}
