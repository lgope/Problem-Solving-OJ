#include<stdio.h>
#include<strings.h>

int main()
{
    int i;
    char ch[100];

    while(gets(ch))
    {
        int len = strlen(ch);
        for(i = 0; i < len; i++)
        {
            ch[i] = tolower(ch[i]);
            if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='y'||ch[i]=='A'||ch[i]=='E'||ch[i]=='O'||ch[i]=='I'||ch[i]=='U'||ch[i]=='Y')
                continue;
            else
            {
                printf(".%c", ch[i]);
            }
        }
    }


    return 0;
}
