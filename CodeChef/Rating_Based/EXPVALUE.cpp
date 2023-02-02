//Expected Value
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod1 998244353

int mul(int a, int b){
    return ((a % mod1) * (b % mod1)) % mod1;
}

int binpow(int a, int b){
    if (b == 0)
        return 1;
    int temp = binpow(a, b / 2);
    temp = mul(temp, temp);
    if (b % 2)
        return mul(temp, a);
    return temp;
}

int mod_inverse(int a, int m = mod1){
    return binpow(a, m - 2);
}

void solve(){
    int N, P;
    cin >> N >> P;

    vector<int> dp(N + 1, 0), dp2(N + 1, 0);
    dp[1] = dp2[1] = mod_inverse(2);

    int inv2 = mod_inverse(2);
    for (int i = 2; i <= N; i++){
        int y = binpow(P, i - 1);
        y = mod_inverse(y);
        int value = dp[i - 1] + mul(binpow(y, 2), inv2) + mul(y, dp2[i - 1]);
        value %= mod1;
        dp[i] = value;
        dp2[i] = (dp2[i - 1] + mul(y, inv2)) % mod1;
    }
    for (int i = 1; i <= N; i++)
        cout << dp[i] << ' ';
    cout << endl;
}

int32_t main(){
    solve();
    return 0;
}