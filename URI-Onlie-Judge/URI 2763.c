#include<stdio.h>
#include<string.h>

int main()
{
    char a[14];
    int i;

    gets(a);
    int len = strlen(a);

    for(i = 0; i < len; i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
        {
            printf("%c", a[i]);
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}
