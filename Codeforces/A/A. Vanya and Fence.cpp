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

    ll n, h, ans, x;
    cin >> n >> h;
    ans = n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans = ans + (x > h);
    }
    cout << ans << endl;

    return 0;
}

/*

     ll n, h,cnt=0,cnt2=0;
    cin >> n >> h;
    int ar[n];
    for (int i = 0; i < n;i++){
        cin >> ar[i];
        if(ar[i]<= h)
        {
            cnt++;
        }
        else
        {
            cnt2 = cnt2 + 2;
        }
    }
    cout << cnt + cnt2;

*/