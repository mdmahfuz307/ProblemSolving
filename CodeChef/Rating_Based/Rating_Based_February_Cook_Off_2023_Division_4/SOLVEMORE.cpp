#include<bits/stdc++.h>
using namespace std;

bool ami(vector<int>&ry,vector<int>&id){
    if(ry[0]+ry[1]==id[0]+id[1]) return id[0]<id[0];
    else return ry[0]+ry[1]<id[0]+id[1];
    }
    
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,k;
        cin>>w>>k;
        vector<int>ay(w),by(w);
        for(int i=0;i<w;i++) cin>>ay[i];
        for(int i=0;i<w;i++) cin>>by[i];

    vector<vector<int>>mu;

    for(int i=0;i<w;i++) mu.push_back({ay[i],by[i]});
    sort(mu.begin(),mu.end(),ami);
    int mx=0;
    int su=0;
    int i=0;
    while(i<w){
        if(mu[i][0]+mu[i][1]+su<=k){
            su+=mu[i][0]+mu[i][1];
            mx=max(mx,mu[i][1]);
            i++;
        }
        else break;
        }

        vector<int>mn(w);

        for(int k=w-1;k>=0;k--){
            if(k==w-1) mn[k]=mu[k][0];
            else mn[k]=min(mn[k+1],mu[k][0]);
        }
        int as=i;
        if(i<w){
            int rem=k-su;
            if(mn[i]<=rem)as++;
            else if(rem+mx>=mu[i][0]+mu[i][1]){as++;}
        }
        cout<<as<<endl;
    }
}