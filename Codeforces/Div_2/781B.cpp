// B. Array Cloning Technique
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n + 3];
        map<int, int> mp;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
            mx = max(mx, mp[ar[i]]);
        }
        int cnt = mx;
        int ans = 0;
        // cout<<cnt<<" "<<ans<<endl;
        while (cnt < n)
        {
            ans++;
            int x = n - cnt;
            if (x > cnt)
            {
                ans += cnt;
                cnt += cnt;
            }
            else
            {
                ans += x;
                cnt += x;
            }
        }
        cout << ans << endl;
    }
}