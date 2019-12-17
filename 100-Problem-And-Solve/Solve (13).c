#include<stdio.h>
int main()
{
  system("color A");
  int i,j,n=1,rows;
  printf("Enter The Number of rows:");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d",n++);
    }
    printf("\n");
  }

}

