#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int nir, mas;
    cin >> nir>> mas;
    vector<int> total(1e6 + 1, 0);
    int ans = 0;
    for (int i = 0; i < mas;i++)
    {
        int abu, babu;
        cin >> abu >> babu;
        total[abu] += babu;
        ans += total[abu];
        cout << ans << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    while(T--)
        solve();
}