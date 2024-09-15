#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;

        int a[n];
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        
        int freq=1;
        for(int i=1; i<n;i++){
            if(a[i]==a[i-1]){
                freq++;
            }
            else{break;
                }
        }

        if(freq==n){
        cout<<-1<<endl;continue;
        }
        cout<<freq<<" "<<n-freq<<endl;

        for(int i=0; i<n; i++){
        if(i==freq) cout<<endl;
        cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}