#include<stdio.h>
int main()
{
    system("color A");
    int num;
    printf("Enter a number to test: \n");
    scanf("%d",&num);
    if(num%3 == 0 && num%5 == 0)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
}
