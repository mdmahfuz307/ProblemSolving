#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> v;
typedef vector<ll> vll;
typedef double dl;
 
const ll mx = 1e5 + 123;
int ar[mx];
 
#define pb push_back
#define endl "\n"
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
 
void solve()
{
    ar[3];
    for(int i=0;i<3;i++){
        cin>>ar[i];
    }
    sort(ar,ar+3);
    if(ar[1]+ar[2] >= 10)
      cout<<"YES"<<endl;
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
