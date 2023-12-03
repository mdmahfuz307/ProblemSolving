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

string canIncreaseZeroes(int t, pair<int, string> test[]) {
    string results = "";

    for (int i = 0; i < t; i++) {
        int n = test[i].first;
        string s = test[i].second;

        int countZeros = 0, countOnes = 0;
        for (char c : s) {
            if (c == '0') {
                countZeros++;
            } else {
                countOnes++;
            }
        }

        if (countZeros > countOnes) {
            results += "YES\n";
        } else {
            int possibleOperations = 0;
            for (int j = 1; j < n; j++) {
                if (s[j - 1] != s[j]) {
                    possibleOperations++;
                }
            }

            if (possibleOperations > 0) {
                results += "YES\n";
            } else {
                results += "NO\n";
            }
        }
    }

    return results;
}

int main() {
    int t;
    cin >> t;

    pair<int, string> test[t];
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        test[i] = {n, s};
    }

    // Output
    cout << canIncreaseZeroes(t, test);

    return 0;
}
