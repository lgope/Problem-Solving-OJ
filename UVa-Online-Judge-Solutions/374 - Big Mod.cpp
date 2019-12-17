#include <iostream>
using namespace std;

typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100005
//#define mod 10000007
#define Accepted 0

int bigMod(int base, int power, int mod)
{
    if (power == 0)
        return 1 % mod;
    int num =  bigMod(base, power/2, mod);

    num = (num * num) % mod;

    if (power % 2 == 1)
        num = (num * (base % mod)) % mod;

    return num;

}

int main()
{
    int base, power, mod;

    while (cin >> base >> power >> mod)
    {

        int res = bigMod(base, power, mod);


        cout << res << endl;
    }


    return Accepted;
}
