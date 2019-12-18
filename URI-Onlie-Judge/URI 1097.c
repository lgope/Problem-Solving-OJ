#include<stdio.h>
int main()
{
    int i, j, x = 7;
    for(i = 1; i <= 9; i=i+2)
    {
        for(j = x; j >= x - 2; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
        x = x + 2;
    }
    return 0;
}
