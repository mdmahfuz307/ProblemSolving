#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int num,turn=1;
	    cin>>num;
	    vector<int>arr;
	    map<int, int>mp;
	    int temp;
	    for(int i=0; i<num; i++){
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    sort(arr.begin(), arr.end());
	    reverse(arr.begin(),arr.end());
	    for(int i=0; i<num; i++){
	      mp[arr[i]]++;
	    }
	    for(auto it:mp){
	        if(it.second%2){
	            turn=0;
	            break;
	        }
	    }
	    if(turn)
	    cout<<"Zenyk"<<endl;
	    else
	    cout<<"Marichka"<<endl;
}
	return 0;
}