#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int small = 0;
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a<b && b<c) small=a;
	    else if(b<a && b<c) small=b;
	    if(c<a && c<b) small=c;
	    
	    cout<<(a+b+c)-small<<endl;
	    
	}
	return 0;
}
