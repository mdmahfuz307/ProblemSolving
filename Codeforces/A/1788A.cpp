// One and Two
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int num;
    cin >> num;
    int a[num];
    int two = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
        if (a[i] == 2)
            two++;
    }
    if (two & 1)
        cout << -1 << endl;
    else
    {
        int current_two = 0;
        int nirob = -1;
        for (int i = 0; i < num; i++)
        {
            if (a[i] == 2)
                current_two++;
            if (current_two == two / 2)
            {
                nirob = i;
                break;
            }
        }
        cout << nirob + 1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}