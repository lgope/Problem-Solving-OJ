#include<stdio.h>
int main()
{
  system("color A");
    int i,sum=0,count=0;
    float avg;
    for(i=10;i<=500;i++)
    {
        if(i%3==0&&i%5==0&&i%12==0)
        {
            sum=sum+i;
            count++;
        }
    }
    avg=sum/count;
    printf("%.2f\n",avg);
}

