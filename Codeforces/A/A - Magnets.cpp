#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,cot=0,sum=0,ans=0,x,k,n,p,i,y;
    string s,com;
 
    cin>>t;
    while(t--){
        cin>>s;
        if(com!=s)cot++;
        com=s;
    }
    cout<<cot<<endl;
   
	return 0;
}
