#include<stdio.h>
#include<string.h>

int main()
{
    char str[501];

    gets(str);

    int l = strlen(str);

    if(l <= 140)
    {
        printf("TWEET\n");
    }

    else
    {
        printf("MUTE\n");
    }

    return 0;
}
