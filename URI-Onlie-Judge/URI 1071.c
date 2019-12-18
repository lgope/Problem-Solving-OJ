#include<stdio.h>
int main()
{
    int x, y , i, m = 0;
    scanf("%d %d", &x, &y);
    for(i = x; i > y; i++)
    {
        if(i%2 == 0)
            printf("%d", i);
    }
}
