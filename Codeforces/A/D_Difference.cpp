#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef vector<int> vi;
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll x = (a * b) - (c * d);
    cout << "Difference = " << x;

    return 0;
}