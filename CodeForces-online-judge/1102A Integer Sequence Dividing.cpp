#include<iostream>
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        if (n % 4 == 1 || n % 4 == 2)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
