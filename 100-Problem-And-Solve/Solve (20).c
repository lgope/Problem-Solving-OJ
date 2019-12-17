#include<stdio.h>
int main()
{
  system("color A");
    char sing_ch;
    printf("Input a character: ");
    scanf("%c", &sing_ch);
    if((sing_ch>="a" && sing_ch<="z") || (sing_ch>="A" && sing_ch<="Z"))
    {
        printf("This is an alphabet.\n");
    }
    else if(sing_ch>='1' && sing_ch<='9')
    {
        printf("This is a digit.\n");
    }
    else
    {
        printf("This is a special character.\n");
    }
}
