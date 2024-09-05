// C. Restore the Array
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t, n;
    cin >> t;
    while (cin >> n)
    {
        ll a, b;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a;
            if (i == 0)
                cout << a << " ";
            else
                cout << min(a, b) << " ";
            b = a;
            if (i == n - 2)
                cout << a << endl;
        }
    }
}