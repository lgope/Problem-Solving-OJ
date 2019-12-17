#include<stdio.h>
int main()
{
  system("color A");
  float a,b,Raton;
  printf("Enter The Two number:");
  scanf("%f %f",&a,&b);
  Raton=((a*3.5)+(b*7.5))/(3.5+7.5);
  printf("Raton = %.5f\n",Raton);
  return 0;
}
