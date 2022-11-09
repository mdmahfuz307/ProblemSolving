#include<bits/stdc++.h>
using namespace std;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        long long ans = abs(x1 - x2) + abs(y1 - y2);
        if (y1 == y2 && y1 == y3)
        {
            // cout<<"col"<<endl;
            if (x3 >= min(x1, x2) && x3 <= max(x1, x2))
                ans += 2;
        }
        else if (x1 == x2 && x1 == x3)
        {
            // cout<<"row"<<endl;
            if (y3 >= min(y1, y2) && y3 <= max(y1, y2))
                ans += 2;
        }
        cout << ans << endl;
    }
}