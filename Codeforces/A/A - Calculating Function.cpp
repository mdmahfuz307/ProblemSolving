#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
    }
    else{
       long long m=(n+1)/2;
       cout<<-m<<endl;
    }

    
}
