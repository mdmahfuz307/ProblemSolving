
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll nu, i, ke, l, r, e = 0, s = 0;
    cin >> nu >> ke;
    for (int i = 0; i < nu; i++)
    {
        cin >> l >> r;
        if (l == ke)
            s++;
        if (r == ke)
            e++;
    }
    if (s > 0 && e > 0)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}