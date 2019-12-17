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
    int test, n, a, b, c, d;
    cin >> test;

    while (test--)
    {
        cin >> n >> a >> b >> c >> d;

        int res = (a+b+c+d) * 2;

        if (res >= n+1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return Accepted;
}
