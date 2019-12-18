#include<stdio.h>
int main()
{
    int a, b, c, time;
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        c = 24 - a;
        time = c + b;
        printf("O JOGO DUROU %d HORA(S)\n", time);
    }
    if(a < b)
    {
        c = b - a;
        printf("O JOGO DUROU %d HORA(S)\n", c);
    }
    if(a == b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
}
