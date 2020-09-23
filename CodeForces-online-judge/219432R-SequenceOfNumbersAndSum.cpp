/******************************************************************************
problem link -> https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
*******************************************************************************/

#include <iostream>

using namespace std;

void sequenceOfSum(int n, int m) {
    
    int sum = 0;
    
    for (int i = n; i <= m; i++) {
        sum += i;
        cout << i << " ";
    }
    
    cout << "sum =" << sum << endl;
}


int main()
{
    int n, m;
    
    
    while (1) {
        cin >> n;
        cin >> m;
        
        if (n <= 0 || m <= 0) break;
    
        if (n > m) {
            sequenceOfSum(m, n);   
        } else sequenceOfSum(n, m);   
    }
    
    return 0;
}
