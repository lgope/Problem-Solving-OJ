#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<string.h>
#include<algorithm>

using namespace std;
typedef long long                   ll;
typedef long double                 ld;
typedef pair<int,int>               pii;
typedef pair<ll,ll>                 pll;
typedef pair<double,double>         pdd;
typedef pair<ld,ld>                 pld;
typedef pair<string, string>        pss;

#define SZ(X)                       ((int)(X).size())
#define ALL(X)                      (X).begin(), (X).end()
#define REP(I, N)                   for (int I = 0; I < (N); ++I)
#define REPP(I, A, B)               for (int I = (A); I < (B); ++I)
#define RI(X)                       scanf("%d", &(X))
#define RII(X, Y)                   scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z)               scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X);             scanf("%d", &X)
#define RS(X)                       scanf("%s", (X))
#define MP                          make_pair
#define PB                          push_back
#define MS0(X)                      memset((X), 0, sizeof((X)))
#define MS1(X)                      memset((X), -1, sizeof((X)))
#define LEN(X)                      strlen(X)
#define PII                         pair<int,int>
#define VPII                        vector<pair<int,int> >
#define PLL                         pair<long long,long long>
#define F                           first
#define S                           second
#define all(x)                      (x).begin(),(x).end()
#define Sort(x)                     sort(all((x)))
#define X                           first
#define Y                           second
#define Mp                          make_pair
#define endt                        '\t'
#define ends                        ' '
#define error(x)                    cerr << #x << " = " << x << endl
#define fast_io                     ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_io                     freopen("in.txt" , "r+" , stdin) ; freopen("out.txt" , "w+" , stdout);
#define CASET int ___T, case_n = 1; scanf("%d ", &___T); while (___T-- > 0)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)

const int MOD = 1e9+7;
const int SIZE = 1e6+10;

inline ll input()
{
    ll n;
    cin >> n ;
    return n;
}
ll pw(ll a, ll b)
{
    return (!b ? 1 : (b & 1 ? a * pw(a * a, b / 2) : pw(a * a, b / 2)));
}

const ll MAXN = 100;
ll n, p[MAXN];

int main()
{
    int n, three = 0, one = 0, two = 0, four = 0, res;

    cin >> n;

    int s[n], i;

    for(i = 0; i < n; i++)
    {
        cin >> s[i];

        if (s[i] < 4 && s[i] > 2)
            three++;
        else if (s[i] < 2 && s[i] > 0)
            one++;
        else if (s[i] < 3 && s[i] > 1)
            two++;
        else
            four++;

    }

    res = four;

    if (three < one) one = one - three;
    else one = 0;
    res += three;

    if (two%2 == 1)
    {
        res++;
        one = one-2;
    }

    res += two/2;

    if (one > 0)
    {
        if (one % 4 != 0) res++;
        res += one / 4;
    }

   cout << res << "\n";

  return 0;
}

