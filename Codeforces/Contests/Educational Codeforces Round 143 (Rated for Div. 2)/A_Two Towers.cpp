#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll num, m, count_a = 0, count_b = 0;
        cin >> num >> m;
        string x, y;
        cin >> x >> y;
        for (int i = 1; i < num; i++)
            if (x[i] == x[i - 1])
                count_a++;
        for (int i = 1; i < m; i++)
            if (y[i] == y[i - 1])
                count_b++;
        if ((count_a > 1 || count_b > 1) || (count_a == 1 && count_b == 1))
            cout << "NO" << endl;
        else if ((count_b == 1 || count_a == 1) && x[num - 1] == y[m - 1])
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}