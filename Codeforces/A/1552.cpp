#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string z = s;
        sort(z.begin(), z.end());
        int k = 0;
        for (int i = 0; i < n;i++){
            if(s[i] != z[i])k++;
        }
        cout << k << endl;
    }
    
}