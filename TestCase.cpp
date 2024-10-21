#include <bits/stdc++.h>
using namespace std;

typedef double dl;
typedef long long ll;
typedef vector<int> v;
typedef vector<ll> vll;
typedef map<int, int> mp;
typedef pair<int, int> ii;
typedef unsigned long long ull;

#define fi first
#define endl "\n"
#define se second
#define pb push_back
#define MOD 1000000007
#define maximum INT_MAX
#define sqr(a) ((a) * (a))
#define ha cout<<"YES"<<endl;
#define na cout<<"NO"<<endl;
#define all(n) (n).begin(), (n).end()
#define rall(a) (a).rbegin(),(a).rend()
#define mas(n) for (int i = 0; i < n; i++)
#define nir(arr) {for (auto & x: arr) cin >>x;}
#define PI 3.1415926535897932384626433832795028841971

#define max3(a, b, c) max(c, max(a, b))
#define min3(a, b, c) min(c, min(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

const ll mx = 1e5 + 123;
ll ar[mx];
const int N=2e5+5;
void solve()
{
    long long int a,b,c,d,e,i,j;

    cin>>e;
    long long int ar[N];
    cin>>a>>b;

    for(i=1;i<=a;i++)
    {
        cin>>ar[i];
    }
    sort(ar+1,ar+a+1);
    long long m=0,n=0;
    for(i=1;i<=a;i++)
    {
        if(m+(a-i+1)*(ar[i]-ar[i-1])>=b)
        {
            n+=(b-m);
            break;
        }
        n+=(a-i+1)*(ar[i]-ar[i-1])+1;
        m+=(a-i+1)*(ar[i]-ar[i-1]);

    }
    cout<<n<<endl;



    // vector<int>ai(b);
    //  for (auto & i : ai)cin >> i;

    // {
    //     f = true;
    // }
    // if(f)
    //     cout << "NO" << endl;
    //     else
    //     cout << "YES" << endl;
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
