#include<stdio.h>
int main()
{
  system("color A");
  int num;
    printf("Input a number:");
    scanf("%d", &num);
    if (num >= 0)
        printf("%d is a positive number \n", num);
    else
        printf("%d is a negative number \n", num);
}

