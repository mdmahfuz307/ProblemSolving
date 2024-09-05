#include <iostream>
using namespace std;

void solve(){
     int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int zero=0,one=0;
	    for(int i=0; i<n; i++){
	        if(s[i]=='0') 
	        zero++;
	        else
	        one++;
	    }
	    if(zero>=one)
	    cout<<one<<endl;
	    else
	    cout<<zero+1<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}