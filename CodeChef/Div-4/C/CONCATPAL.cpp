#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"


void solve(){
    ll n,m; cin>>n>>m;
    string s1,s2; cin>>s1>>s2;
    vector<ll>freq(128,0);
    if (m > n) {
        ll temp = n;
        n = m;
        m = temp;
        string tempstr=s1;
        s1=s2;
        s2=tempstr;
    }
    for (ll i = 0; i < n; i++) {
        freq[s1[i]]++;
    }
    for (ll i = 0; i < m; i++) {
        freq[s2[i]]--;
    }

    ll flag = 1, cnt = 0, diff = n - m;
    for (ll i = 0; i < 128; i++) {
        if (freq[i] < 0) {
            flag = 0;
            break;
        }
        if (freq[i] % 2 == 0) {
            continue;
        }
        if (cnt) {
            flag = 0;
        } else {
            cnt = 1;
        }
    }

    if (flag) cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}