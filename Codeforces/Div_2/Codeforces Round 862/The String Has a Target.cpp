// B. The String Has a Target
#include <bits/stdc++.h>
using namespace std;
#define loop(c) for (long long i = 0; i < c; i++)
#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        ll c;
        cin >> c;
        string e;
        cin >> e;
        ll f = -1, p = 100;
        loop(c) // useing loop
            if ((e[i] - 'a') <= p)
        {
            f = i;
            p = (e[i] - 'a');
        }

        string q;
        q += e[f];
        loop(c)
        { // useing loop
            if (i == f)
                continue;
            q += e[i];
        }
        cout << q << endl;
    }
    return 0;
}