// A. Sereja and Dima
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n + 3];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int sur = 0, nir = 0;
    int l = 0;
    int r = n - 1;
    int z = 0;
    while (l <= r)
    {
        if (z % 2 == 0)
        {
            if (ar[l] > ar[r])
            {
                sur += ar[l];
                l++;
            }
            else
            {
                sur += ar[r];
                r--;
            }
        }
        else
        {
            if (ar[l] > ar[r])
            {
                nir += ar[l];
                l++;
            }
            else
            {
                nir += ar[r];
                r--;
            }
        }
        z++;
    }
    cout << sur << " " << nir << endl;
}