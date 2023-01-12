#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = 0;
        long long ar[n + 3];
        for (int i = 0; i < n;i++)
            cin >> ar[i];
        for (int i = 0; i < n - 1; i++){
            ans = max(ans, ar[i] * ar[i + 1]);
        }

        cout << ans << endl;
    }
    
}