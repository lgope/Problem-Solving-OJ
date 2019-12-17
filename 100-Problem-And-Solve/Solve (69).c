#include<stdio.h>
int main()
{
    system("color A");
    char letter;
    printf("Enter a small letter: \n");
    scanf("%c",&letter);
    printf("Capital version is: %c\n",letter-32);
}
