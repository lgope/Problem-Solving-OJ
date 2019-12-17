#include<stdio.h>
int main()
{
  system("color A");
  double A,R,pi=3.14159;
  printf("The Number Of the Redius:");
  scanf("%lf",&R);
  A=pi*(R*R);
  printf("The area is:%.3lf\n",A);
}
