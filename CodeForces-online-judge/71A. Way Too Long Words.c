#include<stdio.h>
#include<strings.h>

int main()
{
    int n;
    char ch[110];
    scanf("%d", &n);

    while(n--)
    {
        scanf("%s", ch);

        int len = strlen(ch);

        if(strlen(ch) > 10)
        {
            printf("%c%d%c\n", ch[0], strlen(ch)-2, ch[strlen(ch)-1]);
        }
        else
        {
            printf("%s\n", ch);
        }
    }

    return 0;
}
