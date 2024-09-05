#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef vector<int> vi;
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

void solve()
{
    //
    int n, nir, sum, zi, xo, an;
    int a[200005];
    map<int, int> s, p;
    vector<int> q;
    cin >> n;
    s = p;
    q.clear();
    nir = 1;
    an = zi = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> xo;
        for (int j = 2; j <= sqrt(xo); j++)
        {
            if (!s[j] && xo % j == 0)
            {
                q.push_back(j);
            }
            while (xo % j == 0)
            {
                s[j]++;
                xo /= j;
            }
        }
        if (xo != 1)
        {
            if (!s[xo])
            {
                q.push_back(xo);
            }
            s[xo]++;
        }
    }
    for (int i = 0; i < q.size(); i++)
    {
        an += s[q[i]] % 2;
        zi += s[q[i]] / 2;
    }
    cout << an / 3 + zi << endl;
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