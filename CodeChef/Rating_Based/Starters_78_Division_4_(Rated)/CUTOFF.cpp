#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int nir,ax;
        cin>>nir>>ax;
        int s[nir];
        for(int i=0; i<nir; i++) cin>>s[i];
        sort(s,s+nir);
        if(ax==nir) cout<<s[0]-1<<endl;
        else
        cout<<s[nir-ax]-1<<endl;
  }
	return 0;
}