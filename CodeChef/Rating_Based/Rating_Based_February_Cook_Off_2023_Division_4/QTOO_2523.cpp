#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        string s;
        cin>>s;
        unordered_set<char>st;
        int flag=0;
        for(int i=0; i<num; i++){
            if(st.find(s[i])!=st.end()){
                flag=1;
                break;
            }
            st.insert(s[i]);
        }
        if(flag)
        cout<<num-2<<endl;
        else
        cout<<-1<<endl;
    }
}