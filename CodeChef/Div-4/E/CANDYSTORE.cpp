#include <iostream>
#define ll              long long
#define ull             unsigned long long
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll z,s; cin>>z>>s;
	    if(z>=s) cout<<s<<endl;
	    else cout<<z+(s-z)*2<<endl;
	}
	return 0;
}