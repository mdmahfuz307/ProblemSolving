#include<bits/stdc++.h>
#define int long long 
using namespace std;
void nirob() { 
    int f; 
    cin >> f; 
    if (f == 0) { 
        cout << 1 << ' ' << 3 << ' ' << 4 << ' ' << 5 << endl; 
        return; 
    } 
    int ar[4] = {}; 
    ar[0] = ar[1] = ar[2] = f; 
    int j = 0; 
    for (int i = 0; i < 60; i++) 
    { 
        if (!(f & (1ll << i))) 
        { 
            ar[j] += (1ll << i); 
            if (j == 2) 
                ar[3] += (1ll << i); 
            j++; 
            j %= 3; 
        } 
    } 
    for (int i = 0; i < 4; i++){ 
        assert(ar[i] != 0); 
        for (int j = i + 1; j < 4; j++) 
            assert(ar[i] != ar[j]); 
    } 
    int ni = ((ar[0] & ar[1]) | ar[2]) ^ ar[3]; 
    assert(ni == f); 
    if (ar[3] == 0) 
        cout << -1 << endl; 
    else{ 
        for (auto i : ar) 
            cout << i << ' '; 
        cout << endl; 
    } 
}

signed main(){
    int t;
    cin>>t;
    while(t--) nirob();
    return 0;
}