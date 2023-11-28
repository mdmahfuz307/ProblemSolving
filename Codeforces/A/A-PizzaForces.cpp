#include <bits/stdc++.h>
using namespace std;

typedef double dl;
typedef long long ll;
typedef vector<int> v;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef unsigned long long ull;

#define endl "\n"
#define pb push_back
#define MOD 1000000007
#define maximum INT_MAX
#define sqr(a) ((a) * (a))
#define PI 3.141592653589793238462
#define all(n) (n).begin(), (n).end()

#define max3(a, b, c) max(c, max(a, b))
#define min3(a, b, c) min(c, min(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))

const ll mx = 1e5 + 123;
ll ar[mx];

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

void solve()
{
    
     ll n;
        cin >> n;
        if (n <= 10)
        {
            if (n <= 6)
                cout << 15 << endl;
            else if (n <= 8)
                cout << 20 << endl;
            else
                cout << 25 << endl;
        }
        else
        {
            ll ans = (n / 10) * 25;
            ll m = n % 10;
            if (m)
            {
                if (m == 1 || m == 2)
                    ans += 5;
                else if (m < 5)
                    ans += 10;
                else if (m <= 6)
                    ans += 15;
                else if (m <= 8)
                    ans += 20;
                else
                    ans += 25;
            }
            cout << ans << endl;
        }
    

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
