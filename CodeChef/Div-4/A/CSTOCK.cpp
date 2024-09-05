#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int s, a, b,c;
	    cin>>s>>a>>b>>c;
	    
	    double price=s;
	    price += price*c/100;
	    
	    //price = price + price *c /100
	    //price = 100 + 100 * 7/100
	    //price = 107
	    
	    
	    if(price>=a && price<=b)
	    //(107>= 100 && 107 <= 108)
	    cout<<"YES"<<endl;
	    
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
