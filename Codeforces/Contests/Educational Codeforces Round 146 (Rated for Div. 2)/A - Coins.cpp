// A. Coins
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll ni, sh;
        cin >> ni >> sh;
        if (sh % 2 == 0 and ni % 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}