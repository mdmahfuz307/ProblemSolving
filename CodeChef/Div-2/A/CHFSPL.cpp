#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int small = 0;
	    if(a<=b && a<=c) small=a;
	    else if(b<=a && b<=c) small=b;
	    if(c<=a && c<=b) small=c;
	    
	    cout<<(a+b+c)-small<<endl;
	    
	}
	return 0;
}
