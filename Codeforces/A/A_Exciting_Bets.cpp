#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long dif = abs(a - b);
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        long long x = a % dif;
        long long y = b % dif;
        if (x != y)
            cout << 0 << " " << 0 << endl;
        else
        {
            long long ans = min(dif - x, x);
            cout << dif << " " << ans << endl;
        }
    }
}