#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n, k;
        int64_t pr = 1;
        cin >> n >> k;
        vector<int64_t> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            pr *= v[i];
        }
        if (int64_t(2023) % pr == 0) {
            cout << "YES\n";
            cout << int64_t(2023) / pr;
            for (int i = 1; i < k; ++i) cout << " 1";
            cout << "\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;   
}
