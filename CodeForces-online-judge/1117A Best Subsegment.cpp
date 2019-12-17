#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int arr[num], s = 0, r = 0, maxm = 0;

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        maxm = max(maxm, arr[i]);
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] == maxm)
            s++;
        else
            s = 0;

            r = max(r, s);
    }

    cout << r << endl;

    return 0;
}
