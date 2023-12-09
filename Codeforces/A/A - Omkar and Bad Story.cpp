#include <bits/stdc++.h>

#define int long long
using namespace std;

signed main() {
    int q; cin >> q;
    while (q--) {
        int n; cin >> n;
        vector<int> a(n);
        bool b = false; int mx = 0;
        for (auto &x:a) {
            cin >> x;
            if (x < 0) {
                b = true;
            }
            mx = max(mx, x);
        }
        if (b) {
            cout << "nO\n";
        } else {
            cout << "yes\n" << mx + 1 << '\n';
            for (int i = 0; i <= mx ; ++i) cout << i << ' ';
            cout << '\n';
        }
    }
}
