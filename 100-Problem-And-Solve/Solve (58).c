#include<stdio.h>
int main()
{
  system("color A");
  float a,b,c,MEDIA;
  printf("Enter The Numbers:");
  scanf("%f %f %f",&a,&b,&c);
  MEDIA=((a*2)+(b*3)+(c*5))/(2+3+5);
  printf("MEDIA = %.1f\n",MEDIA);
  return 0;
}

