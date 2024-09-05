//750A - New Year and Hurry
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int leftmid = 240 - k;
    int s = 0;
    int e = n;
    int ans = 0;
    while (s <= e)
    {
        int mid = (e + s) / 2;
        int done = 0.5 * mid * (2 * 5 + (mid - 1) * 5);
        if (done > leftmid)
        {
            e = mid - 1;
        }
        else if (done < leftmid)
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            ans = mid;
            break;
        }
    }
    cout << ans << endl;
}