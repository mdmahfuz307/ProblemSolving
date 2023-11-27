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

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4 * (n - 4) / 5;
    ll b = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4 * (n - 4) / 5 * (n - 5) / 6;
    ll c = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4 * (n - 4) / 5 * (n - 5) / 6 * (n - 6) / 7;
    cout << a + b + c;

    /* ll n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v)
        cin >> x;
    */
    return 0;
}