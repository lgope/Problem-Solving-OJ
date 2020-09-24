#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b, q;
    cin >> a >> b >> q;
    
    if (q % 3LL == 0LL) cout << (a^b) << endl;
    else if (q % 3LL == 1LL) cout << a << endl;
    else if (q % 3LL == 2LL) cout << b << endl;
    
    
    return 0;
}
