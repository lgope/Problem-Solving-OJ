#include<stdio.h>

int main()
{
    int n, num;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d", &num);

        if(num > 8000)
        {
            printf("Mais de 8000!\n");
        }
        else
        {
            printf("Inseto!\n");
        }
    }

    return 0;
}
