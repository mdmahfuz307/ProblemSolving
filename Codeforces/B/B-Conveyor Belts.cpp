// B. Conveyor Belts
#include <bits/stdc++.h>
using namespace std;

int solve(int f, int k, int n)
{
    f--;
    k--;
    f = min(f, n - f - 1);
    k = min(k, n - k - 1);
    return min(f, k);
}

int main()
{
    int t, e, o1, p1, o2, y2;
    cin >> t;
    while (t--)
    {
        cin >> e >> o1 >> p1 >> o2 >> y2;
        cout << abs(solve(o1, p1, e) - solve(o2, y2, e)) << endl;
    }
    return 0;
}