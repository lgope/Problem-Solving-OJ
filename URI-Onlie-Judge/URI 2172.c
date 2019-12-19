#include<stdio.h>

int main()
{
    long long int x, m;

    while(scanf("%lld%lld", &x, &m))
    {
        if(x == 0 && m == 0)break;

        printf("%lld\n", x*m);
    }

    return 0;
}
