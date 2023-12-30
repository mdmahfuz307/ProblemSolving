#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        map<char, int> map;  
        vector<char> v(3);  

        v[0] = 'A';
        v[1] = 'B';
        v[2] = 'C';

        char a;
        for (int i = 0; i < 9; i++) {
            cin >> a;
            map[a]++;
        }

        for (int i = 0; i < 3; i++) {
            if (map[v[i]] == 2) {
                cout << v[i] << "\n";
            }
        }
    }

    return 0;
}
