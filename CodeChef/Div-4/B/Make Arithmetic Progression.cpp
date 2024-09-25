#include <bits/stdc++.h>
using namespace std;

typedef double dl;
typedef long long ll;
typedef vector<int> v;
typedef vector<ll> vll;
typedef map<int, int> mp;
typedef pair<int, int> ii;
typedef unsigned long long ull;

#define fi first
#define endl "\n"
#define se second
#define pb push_back
#define MOD 1000000007
#define maximum INT_MAX
#define sqr(a) ((a) * (a))
#define ha cout<<"YES"<<endl;
#define na cout<<"NO"<<endl;
#define all(n) (n).begin(), (n).end()
#define rall(a) (a).rbegin(),(a).rend()
#define mas(n) for (int i = 0; i < n; i++)
#define nir(arr) {for (auto & x: arr) cin >>x;}
#define PI 3.1415926535897932384626433832795028841971

#define max3(a, b, c) max(c, max(a, b))
#define min3(a, b, c) min(c, min(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))

bool isArithProgr(int X, int Y, int Z) {
    return (Y - X == Z - Y);
}

int minimumOp(int X, int Y, int Z) {
    if (isArithProgr(X, Y, Z)) {
        return 0; 
    }

    if (isArithProgr(X, Y, 2 * Y - X)) {
        return 1; 
    }
    if (isArithProgr(2 * Y - Z, Y, Z)) {
        return 1; 
    }
    if (isArithProgr(X, 2 * Y - (Z - X), Z)) {
        return 1;
    }
    return 2; 
}

int main() {
    int Ti;
    cin >> Ti;

    while (Ti--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        cout << minimumOp(X, Y, Z) << endl;
    }
}