#include<stdio.h>
int main()
{
  system("color A");
  float V,r,pi=3.1416;
  printf("Enter The Number Of redius:");
  scanf("%f",&r);
  V=(4.0/3.0)*pi*(r*r*r);
  printf("The volume of a sphere:%.3f\n",V);
}
