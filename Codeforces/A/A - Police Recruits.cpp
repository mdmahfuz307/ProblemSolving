#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,crime=0,num; cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num>=1){
            count+=num;  }
        else{
        if(count<1)
            crime++;
            else count--;}  }
    cout<<crime<<endl;
    return 0;}
   
