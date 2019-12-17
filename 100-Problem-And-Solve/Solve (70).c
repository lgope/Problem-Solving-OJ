#include<stdio.h>
int main()
{
  system("color A");
  double R,pi=3.14159,VOLUME;
  printf("Enter the number of Redius:");
  scanf("%lf",&R);
  VOLUME=(4/3.0)*pi*(R*R*R);
  printf("VOLUME = %.3lf\n",VOLUME);
  return 0;
}

