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
    int n;

    cin >> n;

    int l[n], r[n], i, k, res = 0;

    for (i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }

    cin >> k;

    for (i = 0; i < n; i++)
    {
        if (k <= r[i])res++;
    }

    cout << res << endl;

    return Accepted;
}
