#include<stdio.h>
int main()
{
    system("color A");
    int num;
    printf("Enter a number to test: \n");
    scanf("%d",&num);
    if(num%2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}
