#include<stdio.h>
int main()
{
  system("color A");
  char ch;
  double salary,sale,TOTAL;
  printf("Enter The Character,Salary,Sale:");
  scanf("%s %lf %lf",&ch,&salary,&sale);
  TOTAL=salary+(sale*15)/100;
  printf("TOTAL = R$ %.2lf\n",TOTAL);
  return 0;
}
