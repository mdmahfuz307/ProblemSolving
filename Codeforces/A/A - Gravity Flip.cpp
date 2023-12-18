#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        s.insert(num);
    }
    for(auto value:s){
        cout<<value<<" ";
    }
    return 0;
}
