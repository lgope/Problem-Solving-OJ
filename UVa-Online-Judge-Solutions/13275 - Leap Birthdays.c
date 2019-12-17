#include<stdio.h>

int main()
{
    int t, d, m, y, qy, count = 1;

    scanf("%d", &t);

    while(t--)
    {
        int res = 0, res1 = 0, fres = 0;
        scanf("%d%d%d%d", &d, &m, &y, &qy);

        if(d == 29 && m == 2)
        {
            res = (y/400) + (y / 4) - (y / 100);
            res1 = (qy/400) + (qy / 4) - (qy / 100);
            fres = res1 - res;
        }
        else
        {
            fres = qy - y;
        }

        printf("Case %d: %d\n", count++, fres);
    }

    return 0;
}
