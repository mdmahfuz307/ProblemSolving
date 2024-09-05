#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        int odd = 0, even = 0;
        int x;
        n *= 2;
        for (int i = 0; i < n;i++){
            cin >> x;
            if(x%2==0)
                even++;
            else
                odd;
        }
        if(odd==even)
            cout << "YES" << endl;
        else
            cout << "No" << endl;
    }
}