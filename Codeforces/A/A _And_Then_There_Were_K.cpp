#include <bits/stdc++.h>
using namespace std;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Graph Grid //
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = 1;
        while (ans <= n)
        {
            ans *= 2;
        }
        ans /= 2;
        ans--;
        cout << ans << endl;
    }
    return 0;
}