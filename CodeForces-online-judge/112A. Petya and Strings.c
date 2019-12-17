#include<stdio.h>
#include<strings.h>

int main()
{
    char str1[100], str2[100];

    scanf("%s%s", str1, str2);

    for(int i = 0; i < strlen(str1); i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    if(strcmpi(str1, str2) == 0)
    {
        printf("0\n");
    }
    else
    {
        for(int j = 0; j < strlen(str1); j++)
        {
            if(str1[j] < str2[j])
            {
                printf("-1\n");
                break;
            }
            if(str2[j] < str1[j])
            {
                printf("1\n");
                break;
            }
        }
    }

    return 0;
}
