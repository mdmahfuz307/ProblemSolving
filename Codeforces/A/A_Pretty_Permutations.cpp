#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n + 2];
        for (int i = 1; i <= n; i++)
            ar[i] = i;
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n; i += 2)
            {
                swap(ar[i], ar[i + 1]);
            }
        }
        else
        {
            for (int i = 1; i <= n - 3; i += 2)
            {
                swap(ar[i], ar[i + 1]);
            }
            int a = ar[n];
            int b = ar[n - 1];
            int c = ar[n - 2];
            ar[n - 2] = a;
            ar[n - 1] = c;
            ar[n] = b;
        }
        for (int i = 1; i <= n; i++)
            cout << ar[i] << " ";
        cout << endl;
    }
}