#include<stdio.h>
int main()
{
  system("color A");
  float A,B,C,D,sum;
  printf("Enter The Numbers:");
  scanf("%f %f %f %f",&A,&B,&C,&D);
  sum=((A * B)-(C * D));
  printf("The sum is:%.4f",sum);
}
