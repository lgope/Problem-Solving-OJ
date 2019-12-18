#include<stdio.h>
int main()
{
    int sh, sm, eh, em, rh, rm;
    scanf("%d %d %d %d", &sh, &sm, &eh, &em);
    rh = eh - sh;
    if(rh < 0)
    {
        rh = 24 + (eh - sh);
    }
    rm = em - sm;
    if(rm < 0)
    {
        rm = 60 + (em - sm);
        rh--;
    }
    if(sh == sm && eh == em)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", rh, rm);
    }
    return 0;
}
