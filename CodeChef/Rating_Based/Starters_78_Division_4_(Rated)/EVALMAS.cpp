#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ni,xo,cn=1;
        cin>>ni>>xo;
        if((xo>ni+1) || (xo<0 && abs(xo)>=ni))
        cout<<-1<<endl;
        else{
            if(xo>0){
                for(int i=0; i<ni; i++){
                    if(cn!=xo){
                        cout<<'+';
                        cn++;
                        continue;
                    }
                    cout<<'*';
                }
                cout<<endl;
            }
            else{
                for(int i=0; i<ni; i++){
                    if(cn!=xo){
                        cout<<'-';
                        cn--;
                        continue;
                    }
                    cout<<'*';
                }
                cout<<endl;
            }
        }
    }
}