#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long avg = 0;
        long long ar[n + 3];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        sort(ar, ar + n);
        avg = ar[0];
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (avg == ar[i])
                cnt++;
            else
                break;
        }
        cout << n - cnt << endl;
    }
}