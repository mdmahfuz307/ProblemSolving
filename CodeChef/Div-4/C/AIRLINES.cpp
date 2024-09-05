#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"


void solve(){
        ll a,b,c; cin>>a>>b>>c;
	    ll tot = a*10;
	    if(b>tot){
	        cout<<tot*c<<endl;
	        return;
	    }
	    cout<<b*c<<endl;
	}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}