#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int u,v,a,s;
	    cin>>u>>v>>a>>s;
	    if(u*u - 2*a*s <= v*v) cout<<"Yes"<<endl;
	    //(1*1 - 2*1*1 <= 1*1)
	    //(-1 <= 1)
	    else cout<<"No"<<endl;
	    //(2*2 - 2*1*1 <= 1*1)
	    //(2 <= 1)
	}
	return 0;
}
