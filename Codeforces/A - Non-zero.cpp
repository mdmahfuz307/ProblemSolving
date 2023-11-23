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
# define M_PI           3.14159265358979323846  /* pi */
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

// -------------------------------------------------- Do Not Disturb --------------------------------------------------//

void solve()
{
     int n;
    cin>>n;
    int sum=0,count=0;
    vector<int> v(n),a;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0){
            count++;
            v[i]++;
        }
        sum+=v[i];
    }
    if(sum==0){
        count++;
    }
    cout<<count<<endl;
    
    
}


int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    ll _ = 1;
    cin >> _;
    while (_--)
        solve();
    return 0;
}
