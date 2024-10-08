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
#define mas(n) for (int i = 0; i < n; i++)
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
    ll n, ki;
    cin >> n >> ki;

    ll st = max(1LL, n - ki + 1);
    ll en = n;

    ll ddCo = 0;

    if(st % 2 == 1) {
        ll Co = (en - st);
        ddCo = Co  / 2 + 1;
    } else {
        ll Coi = (en - st + 1);
        ddCo = Coi / 2;
    }

    if(ddCo % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
