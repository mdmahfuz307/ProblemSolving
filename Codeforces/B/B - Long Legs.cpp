// B-Long Legs
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef vector<int> vi;
void solve()
{
    ll x, y;
    cin >> x >> y;
    int ans = 1e9;
    for (int i = 1; i <= 100000; i++)
        ans = min(ans, i - 1 + (int)ceil(1.0 * x / i) + (int)ceil(1.0 * y / i));
    cout << ans << endl;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int _;
    cin >> _;
    while (_--)
        solve();
    return 0;
}