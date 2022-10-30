#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int mx1 = max(a, b);
        int mn1 = min(a, b);
        int mx2 = max(c, d);
        int mn2 = min(c, d);
        if (mn1 > mx2 || mn2 > mx1)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}