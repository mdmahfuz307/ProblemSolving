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

#define pb push_back
#define endl "\n"

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if(a+ b - c == d)
        cout<<"YES"<<endl;
    else if(a+ (b * c)==d)
        cout<<"YES"<<endl;
    else if (a - b + c == d)
        cout << "YES" << endl;
    else if ((a - b) + c == d)
        cout << "YES"<<endl;
    else if (a - (b * c) == d)
        cout << "YES" << endl;
    else if ( (a * b)-c == d)
        cout << "YES" << endl;
    else if ((a * b) + c == d)
        cout << "YES" << endl;
    else
        cout << "NO"<<endl;

    return 0;
}
