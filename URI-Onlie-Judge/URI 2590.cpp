#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
#include<stdalign.h>
#include<vector>
#include<set>
#include<map>
#include<iomanip>

#define F first
#define S second
#define P system("PAUSE");
#define R return 0;
#define pb push_back

using namespace std;
const long long A = 100000000000000LL, N = 228228;

int t;
long long a[N], k, res, i, j, n, m;

int main()
{
    cin >> t;

    while(t--)
    {
        cin >> n;

        res = n % 4;

        if(res == 0)
        {
            cout << "1\n";
        }
        else if(res == 1)
        {
            cout << "7\n";
        }
        else if(res == 2)
        {
            cout << "9\n";
        }
        else if(res == 3)
        {
            cout << "3\n";
        }
    }

    return 0;
}
