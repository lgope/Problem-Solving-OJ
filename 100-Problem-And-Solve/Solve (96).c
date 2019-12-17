#include<stdio.h>
int main()
{
   system("color A");
   int n, first = 0,second = 1;
   printf("Enter the limit N [ >= 1]: \n");
   scanf("%d",&n);
   while(first <= n)
    {
        printf("%d ",first);
        int temp = first;
        first = second;
        second = second + temp;
   }
}
