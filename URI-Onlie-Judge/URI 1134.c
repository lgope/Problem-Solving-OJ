#include<stdio.h>

int main()
{
    int x = 0, Alcohol = 0, Gasoline = 0, Diesel = 0;

    while(x != 4)
    {
        scanf("%d", &x);

        if(x == 1)
        {
            Alcohol++;
        }
        else if(x == 2)
        {
            Gasoline++;
        }
        else if(x == 3)
        {
            Diesel++;
        }
    }


    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", Alcohol);
    printf("Gasolina: %d\n", Gasoline);
    printf("Diesel: %d\n", Diesel);

    return 0;
}

