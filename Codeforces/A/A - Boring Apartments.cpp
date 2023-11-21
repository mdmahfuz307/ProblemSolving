#include <bits/stdc++.h>
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

#define sqr(a) ((a) * (a))
#define pb push_back
#define endl "\n"

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

void solve()
{
    int x;
        cin >> x;
 
        string s = to_string(x);
        int l = s.size();
 
        int ans = (s[0] - '0' - 1) * 10;
 
        for (int i = 1; i <= l; i++)
        {
            ans += i;
        }
        cout << ans << endl;
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
