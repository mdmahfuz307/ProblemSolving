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

    vector<int> ar(4);

    for (int i = 0; i < 4; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    cout << ar[3] - ar[0] << " " << ar[3] - ar[1] << " " << ar[3] - ar[2] << endl;

    /* ll n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v)
        cin >> x;
    */
    return 0;
}
