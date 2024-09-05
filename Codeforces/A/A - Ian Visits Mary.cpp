// A. Ian Visits Mary
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
typedef unsigned long long ull;
typedef pair<int, int> pi;
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

void solve()
{
    int r, p;
    cin >> r >> p;
    cout << 2 << endl;
    cout << 1 << " " << p - 1 << endl;
    cout << r << " " << p << endl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    return 0;
}