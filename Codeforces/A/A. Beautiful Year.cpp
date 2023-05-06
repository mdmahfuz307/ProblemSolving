#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int mx = 1e5 + 123;

typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef double dl;

#define pb push_back
#define endl "\n"
#define ar array
int ar[mx];
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    for (;;)
    {

        n++;
        int b = n / 1000;
        int c = (n / 100) % 10;
        int d = (n / 10) % 10;
        int e = (n % 10);

        if (b != c && b != d && b != e && c != d && c != e && d != e)
        {
            break;
        }
    }
    cout << n;
    return 0;
}