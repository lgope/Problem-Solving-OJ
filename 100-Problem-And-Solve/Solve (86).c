#include<stdio.h>
int main()
{
  system("color A");
  int i;
  for(i=1;i<=100;i++)
  {
    if(i%2==0)
    {
      printf("The even Number:%d\n",i);
    }
  }
}
