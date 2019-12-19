#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, j;
    char str[20];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%s %d", str, &j);
        if(!strcmp(str, "Thor"))printf("Y\n");
        else printf("N\n");
    }

    return 0;
}
