#include <stdio.h>
int main()
{
  system("color A");
    int num1, num2, num3;
    printf("Enter the values of three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("1st Number = %d\n2nd Number = %d\n3rd Number = %d\n", num1, num2, num3);
   if ((num1 > num2) && (num1 > num3))
            printf("The 1st Number is the greatest among three.\n");
   if ((num2 > num3) && (num2 > num1))
        printf("The 2nd Number is the greatest among three \n");
   if ((num3 > num1) && (num3 > num2))
           printf("The 3rd Number is the greatest among three. \n");

}
