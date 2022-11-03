#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = 0;
        int stair = 0;
        while (stair < x)
        {
            stair += y;
            if (stair > x)
            {
                stair -= y;
                stair++;
            }
            ans++;
        }
        cout << ans << endl;
    }
}