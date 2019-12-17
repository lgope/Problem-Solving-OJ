#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<stack>
#include<queue>
#include<sstream>
#include<bitset>
#include<cstdio>
#include<stdio.h>
#include<cstring>
#include<stdio.h>
#include<math.h>
#include<cmath>

using namespace std;
typedef long long ll;
typedef vector<ll>vl;
typedef long double ld;

#define cn(n)  scanf("%d", &n)
#define FileIn(file) freopen(file".inp", "r", stdin)
#define FileOut(file) freopen(file".out", "w", stdout)
#define F(i, a, b) for (int i=a; i<=b; i++)
#define rep(i, n) for (int i=0; i<n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
//#define PI  3.14159265358979323846


int n;
int tot[100];

int main()
{
    int i;
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    for(i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        tot[b] += a;

       // cout << tot[b] << " " << a << fn;
    }

    int ans =0 ;
    for(i = 10; i >= 1; i--)
    {
        int g = min(n, tot[i]);
        //cout << g << " ";
        n -= g; //cout << n << " ";
        ans += g * i; //cout << ans << fn;
    }
    printf("%d\n", ans);

    return 0;
}
