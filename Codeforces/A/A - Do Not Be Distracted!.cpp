#include <bits/stdc++.h>
using namespace std;

int main(){
  long long t; cin >> t;
  while(t--){
    int n; cin >> n;
    string s; cin >> s;
    set<char> v;
    int ans = 1;
    for(int i = 0; i < n; i ++){
      if(v.find(s[i]) != v.end() && s[i]!=s[i-1]) ans = 0;
      v.insert(s[i]);
    }
    cout<<(ans?"YES\n":"NO\n");
  }
}
