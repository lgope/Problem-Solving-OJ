#include<stdio.h>
int main()
{
    int t, i, in = 0, out = 0, n;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if(n >= 10 && n <= 20)in++;
        else out++;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}
