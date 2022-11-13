#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w1,w2,x1,x2,M;
	    cin>>w1>>w2>>x1>>x2>>M;
	    if((w2-w1)<=x2*M && (w2-w1)>=x1*M){
	        //(4-2)<=2*2 && (4-2)>=1*2
	        //2<=4 && 2>=2
	        
	        //(2-1)<=2*2 && (2-1)>=1*2
	        //1<=4 && 1>=2
	        cout<<1<<endl;
	    }
	    else
	        cout<<0<<endl;
	}
	return 0;
}