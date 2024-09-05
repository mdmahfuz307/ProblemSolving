#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int h[n],a[n];
   for(int i=0;i<n;i++){
      cin>>h[i]>>a[i]; 
   }
   int cnt=0;
  for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
         if(h[i]==a[j]){
             cnt++;
         } 
         if(a[i]==h[j]){
             cnt++;
         }
      }
  }
  cout<<cnt;
    return 0;
}
