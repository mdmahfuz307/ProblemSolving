// A CQXYM Count Permutations
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        n += n;
        long long fact = 1;
        for (int i = 3; i <= n;i++)
        {
            fact *= i;
            fact %= mod;
        }
        cout << fact << endl;
    }
    return 0;
}
