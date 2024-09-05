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
    ll ni, sho;
    cin >> ni;
    cin >> sho;
    vector<int> m(ni + 1);

    for (int i = 1; i <= ni; i++)
    {
        cin >> m[i];
    }

    int cnt = 0;
    for (int i = 1; i <= ni; i++)
    {
        if ((m[i] - i) % sho != 0)
        {
            cnt++;
        }
    }

    if (cnt == 0)
    {
        cout << 0 << endl;
    }
    else if (cnt <= 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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