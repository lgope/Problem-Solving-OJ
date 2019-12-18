#include<stdio.h>
int main()
{
    double salary, sell, bonus;
    char name;
    scanf("%s %lf %lf",&name, &salary, &sell);
    bonus = salary + (sell * 0.15);
    printf("TOTAL = R$ %.2lf\n", bonus);
    return 0;
}
