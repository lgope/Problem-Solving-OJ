#include<stdio.h>
int main()
{
  int a=50000,b,c,d;
  printf("base salary: %d\n",a);
  b=a*0.40;
  printf("bonus of house rent: %d\n",b);
  c=a*0.15;
  printf("Other: %d\n",c) ;
  d=a+b+c;
  printf("Total : %d\n",d);
}
