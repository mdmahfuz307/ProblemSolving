#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long totalSquares = 0;
        for (int i = 0; i < n; i++) {
            int ai;
            cin >> ai;
            totalSquares += ai;
            
        }

        long long sideLength = sqrt(totalSquares);
        if (sideLength * sideLength == totalSquares) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
