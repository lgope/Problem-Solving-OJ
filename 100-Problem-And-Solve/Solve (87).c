#include<stdio.h>
int main()
{
  system("color A");
    int i;
    for(i = 100; i <= 200; i++)
    {
        if(i%3 == 0 && i%5 == 0)
        {
            printf("%d\n",i);
        }
    }
}
