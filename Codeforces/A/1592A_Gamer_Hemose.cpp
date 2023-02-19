//A. Gamer Hemose
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> n >> h;
        ll ar[n + 2];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        sort(ar, ar + n);

        ll sum = ar[n - 1] + ar[n - 2];

        if (h <= ar[n - 1])
            cout << 1 << endl;
        else if (h <= sum)
            cout << 2 << endl;
        else
        {
            if (h % sum == 0)
                cout << (h / sum) * 2 << endl;
            else
            {
                ll ans = (h / sum) * 2;
                if (h % sum > ar[n - 1])
                    ans += 2;
                else
                    ans++;
                cout << ans << endl;
            }
        }
    }
}
