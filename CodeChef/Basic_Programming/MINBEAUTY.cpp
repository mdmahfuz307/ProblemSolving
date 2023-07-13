#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define loop(i,N) for (int i = 0; i < N;i++)
typedef vector<int> vii;
void solve()
{
        int num;
        cin >> num;

        vii arr(num);
        loop(i, num) cin >> arr[i];
        int ans = INT16_MAX;
        int median = arr[1] * 3;
        int mean = arr[0] + arr[1] + arr[2];
        ans = abs(median - mean);

        sort(arr.begin(), arr.end());
        for (int i = 1; i < num - 1;i++)
        {
            median = 3 * arr[i];
            for (int j = 0; j < i;j++)
            {
                mean = arr[i] + arr[j];
                int temp = median - mean;
                if(temp < arr[i])
                continue;
                else if(temp == arr[i])
                {
                ans = min(ans, abs(median - mean - arr[i + 1]));
                continue;
                }
                int pos = lower_bound(all(arr), temp) - arr.begin();
                if(pos != num || pos <= i)
                ans = min(ans, abs(mean - median + arr[pos]));
                pos--;
                if(pos>i)
                ans = min(ans, abs(mean - median + arr[pos]));

            }
        }
        cout << ans << endl;
    }
    int32_t main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int t;
        cin >> t;
        while (t--)
        
            solve();
    }
