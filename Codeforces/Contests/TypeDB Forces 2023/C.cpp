#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, s;
    cin >> n >> s;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> x(n), y(n);
    for (int i = 1; i < n - 1; i++)
    {
        int a = s;
        int b = arr[i] - s;
        if (b <= 0)
        {
            a += b;
            b = 0;
        }
        x[i] = a;
        y[i] = b;
    }

    vector<vector<int>> dp(n, vector<int>(2, 0));
    dp[1][0] = arr[0] * x[1];
    dp[1][1] = arr[0] * y[1];
    for (int i = 2; i < n - 1; i++)
    {
        dp[i][0] = min(dp[i - 1][0] + x[i] * y[i - 1], dp[i - 1][1] + x[i] * x[i - 1]);
        dp[i][1] = min(dp[i - 1][0] + y[i] * y[i - 1], dp[i - 1][1] + y[i] * x[i - 1]);
    }
    int ans = min(dp[n - 2][0] + y[n - 2] * arr[n - 1], dp[n - 2][1] + x[n - 2] * arr[n - 1]);
    cout << ans << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}