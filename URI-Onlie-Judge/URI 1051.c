#include<stdio.h>
int main()
{
    float salary, f1, R$;
    scanf("%f", &salary);
    if(salary > 2000.00 && salary <= 3000.00)
    {
        f1 = salary - 2000;
        R$ = f1 * 0.08;
        printf("R$ %.2f\n",R$);

    }
    else if(salary > 3000.00 && salary <= 4500.00)
    {
        f1 = salary - 3000;
        R$ = f1 * 0.18 + 80;
        printf("R$ %.2f\n",R$);
    }
    else if(salary > 4500.00)
    {
        f1 = salary - 4500;
        R$ = f1 * 0.28 + 350;
        printf("R$ %.2f\n",R$);
    }
    else
    {
        printf("Isento\n");
    }
    return 0;
}
