#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef double dl;

#define pb push_back
#define endl "\n"
#define ar array
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z')
        c -= 32;
    else
        c += 32;

    cout << c;

    return 0;
}