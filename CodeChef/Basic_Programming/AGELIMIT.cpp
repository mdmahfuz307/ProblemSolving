#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<ll> vll;

#define pb push_back
#define endl "\n"
#define ar array
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

void solve()
{
    int x,y,a;
    cin>>x>>y>>a;
    
    if(a>=x && a<y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    return 0;
}
