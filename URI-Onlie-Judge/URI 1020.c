#include<stdio.h>
int main()
{
    int days, temp, ano, mes;
    scanf("%d", &days);
    ano = days / 365;
    temp = days % 365;
    mes = temp / 30;
    temp = temp % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, temp);
    return 0;
}
