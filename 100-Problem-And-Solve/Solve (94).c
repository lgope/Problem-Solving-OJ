#include<stdio.h>
int main()
{
  system("color A");
    int i, sum = 0;
    for(i = 5; i <= 25; i++)
    {
        sum = sum +(i * i);
    }
    printf("%d\n",sum);
}
