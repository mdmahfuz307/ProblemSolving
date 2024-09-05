// A. Insert Digit
#include <bits/stdc++.h>
using namespace std;
#define loop(c) for (long long i = 0; i < g; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int g, z;
        string sho, nir;
        cin >> g >> z >> sho;
        int j = -1;
        loop(g) // using loop
        {
            if ((sho[i] - '0') < z)
            {
                nir += '0' + z;
                j = i;
                break;
            }
            nir += sho[i];
        }
        if (j == -1)
            nir += '0' + z;
        else
        {
            for (int i = j; i < g; i++)
                nir += sho[i];
        }
        cout << nir << endl;
    }
}
