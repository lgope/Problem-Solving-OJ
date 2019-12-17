#include<stdio.h>
int main()
{
   system("color A");
   double x,y,z,avg;
   printf("Enter The Four Variable:");
   scanf("%lf %lf %lf",&x,&y,&z);
   avg=(x+y+z)/3;
   printf("Average of x, y and z is:%.3lf\n",avg);
}
