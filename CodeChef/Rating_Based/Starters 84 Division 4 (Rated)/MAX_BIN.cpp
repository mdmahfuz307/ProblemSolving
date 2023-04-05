#include <iostream>
using namespace std;

int main(){
    int t,n; cin>>t;
	while(t--){
    int ni,kx;
    string q;
    cin>>ni>>kx>>q;
    if(q[0]=='0'){
        kx--;
        q[0]='1';
    }
    while(kx--) q+='0';
    cout<<q<<endl;
}
	return 0;
}