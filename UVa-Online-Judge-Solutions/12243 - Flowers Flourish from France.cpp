#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>

using namespace std;

typedef long long                   ll;
typedef long double                 ld;
typedef pair<int,int>               pii;
typedef pair<ll,ll>                 pll;
typedef pair<double,double>         pdd;
typedef pair<ld,ld>                 pld;
typedef pair<string, string>       pss;

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
    char str[1100];

    while(scanf("%s", &str) != EOF)
    {
        if(str[0] == '*')
            break;

        int len = strlen(str);

        int str1[1100], fi = 0, i;

        str1[fi] = tolower(str[0]);

        for(i = 0; i < len; i++)
        {
            if(str[i] == ' ')
                str1[++fi] = tolower(str[i+1]);
        }

        int flag = 0;

        for(i = 0; i < fi; i++)
        {
            if(str[i] != str[i+1])
            {
                flag = 1;
                break;
            }

        }

        if(flag == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }

    }

    return 0;
}
