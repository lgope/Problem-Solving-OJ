#include <stdio.h>
int main()
{
  system("color A");
    int year;
    printf("Input a year :");
    scanf("%d", &year);
    if ((year%400)==0)
        printf("%d is a leap year.\n",year);
    else if ((year%100)==0)
        printf("%d is a not leap year.\n",year);
    else if ((year%4)==0)
        printf("%d is a leap year.\n",year);
    else
        printf("%d is not a leap year \n",year);
}
