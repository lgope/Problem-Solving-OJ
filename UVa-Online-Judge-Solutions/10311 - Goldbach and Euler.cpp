#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 1000001
#define mod 10000007
#define Accepted 0

ll mark[mx], nprime;
vector <ll> primeNumbers;
void sieve()
{
    bool prime[mx];

    memset(prime, true, sizeof(prime));

    for (ll p = 2; p*p <= mx; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*p; i<=mx; i += p)
                prime[i] = false;
        }
    }

    for (ll p=2; p<=mx; p++)
        if (prime[p])
            primeNumbers.push_back(p);
}

ll sumDigits(ll num)
{
    ll res = 0;

    while (num != 0)
    {
        res += num % 10;
        num /= 10;
    }

    return res;
}


int main()
{
    sieve();
    ll num;
    scanf("%lld", &num);

    while(num--)
    {
        ll t1, t2;
        scanf("%lld %lld", &t1, &t2);

        ll countt = 0;
        while (t1 <= t2)
        {
            ll sumOfDigitPrime;

            if (primeNumbers[t1])
            {
                sumOfDigitPrime = sumDigits(t1);

                if (primeNumbers[sumOfDigitPrime])
                    countt++;
            }

            t1++;
        }

        printf("%lld\n", countt);
    }

    return Accepted;
}
