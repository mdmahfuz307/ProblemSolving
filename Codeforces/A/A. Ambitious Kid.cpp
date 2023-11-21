#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> v;
typedef long long ll;
typedef vector<ll> vll;
typedef double dl;

const ll mx = 1e5 + 123;
int ar[mx];

#define sqr(a) ((a) * (a))
#define pb push_back
#define endl "\n"

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

    ll mn = INT_MAX, x;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;

        mn = min(abs(x), mn);
    }

    cout << abs(mn) << "\n";

    return 0;
}
