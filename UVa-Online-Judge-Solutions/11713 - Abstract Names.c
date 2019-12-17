#include<stdio.h>
#include<string.h>

int main()
{
    int t, len1, len2, i, flag;
    char ch1[20], ch2[20];

    scanf("%d", &t);
    while(t--)
    {
        scanf("%s%s", ch1, ch2);

        len1 = strlen(ch1);
        len2 = strlen(ch2);

        if(len1 == len2)
        {
            for(i = 0; i < len1; i++)
            {
                if((ch1[i] == 'a' || ch1[i] == 'e' || ch1[i] == 'i' || ch1[i] == 'o' || ch1[i] == 'u') &&
                    (ch2[i] == 'a' || ch2[i] == 'e' || ch2[i] == 'i' || ch2[i] == 'o' || ch2[i] == 'u'))
                           flag = 1;
                           else if(ch1[i] == ch2[i])
                               flag = 1;
                    else
                    {
                        flag = 0;
                        break;
                    }
            }

            if(flag == 1)
                printf("Yes\n");
            else
                printf("No\n");

        }
        else printf("No\n");
    }

    return 0;
}
