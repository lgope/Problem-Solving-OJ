#include <iostream>
using namespace std;

typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100005
#define mod 10000007
#define Accepted 0

int main()
{
    int h1, m1, h2, m2, h, m;

    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);

    m1 += (h1 * 60);
    m2 += (h2 * 60);

    int res = (m1 + m2) / 2;

    h = res / 60;
    m = res % 60;

    if (h < 10 && m < 10)
    {
        printf("0%d:0%d\n", h, m);
    }
    else if (h < 10)
    {
        printf("0%d:%d\n", h, m);
    }
    else if (m < 10)
    {
        printf("%d:0%d\n", h, m);
    }
    else
    {
        printf("%d:%d\n", h, m);
    }

    return Accepted;
}
