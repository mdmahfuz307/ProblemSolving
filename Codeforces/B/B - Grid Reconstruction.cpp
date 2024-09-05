// B - Grid Reconstruction
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
typedef unsigned long long ull;
typedef pair<int, int> pi;
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

void solve()
{
    int i, j, k, p, m;
    cin >> p;
    vector<vector<int>> nir(2, vector<int>(p));
    int sh = 2 * p;
    nir[0][0] = sh;
    nir[1][p - 1] = sh - 1;
    int front = 1, back = sh - 2;
    for (i = 0; i < p - 1; i++)
    {
        if (i & 1)
        {
            nir[1][i] = back - 1;
            nir[0][i + 1] = back;
            back -= 2;
        }
        else
        {
            nir[1][i] = front;
            nir[0][i + 1] = front + 1;
            front += 2;
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < p; j++)
            cout << nir[i][j] << " ";
        cout << endl;
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