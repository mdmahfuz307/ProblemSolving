// A. We Need the Zero
#include <bits/stdc++.h>
using namespace std;
#define loop(h) for (long long i = 0; i < h; i++)
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h;
        cin >> h;
        int nir, dim;
        nir = 0;
        loop(h)
        {
            cin >> dim;
            nir ^= dim;
        }
        if (h % 2 == 0)
        {
            if (nir == 0)
                cout << 1 << endl;
            else
                cout << -1 << endl;
        }
        else
        {
            cout << nir << endl;
        }
    }
}