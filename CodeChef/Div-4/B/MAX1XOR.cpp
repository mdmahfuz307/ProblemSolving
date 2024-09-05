//Max count of 1
#include <iostream>
using namespace std;

int main(){
    int t; cin>>t; 
	while(t--){
    int n,nir=0,sho=1; cin>>n;
    string st; cin>>st;
    char f='1',p='0';
    for(int i=1; i<n; i++){
        if(f!=st[i-1]){
            f='1'; sho++;
        }
        else f='0';
         if(p!=st[i-1]){
            p='1';
            nir++;
        }
        else p='0';
    }
    cout<<max(nir,sho)<<endl;
}
	
	return 0;
}