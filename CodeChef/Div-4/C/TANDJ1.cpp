#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,k;
	    cin>>a>>b>>c>>d>>k;
	     int x=max(a,c)-min(a,c);
	    int y=max(b,d)-min(b,d);
	    int z=max(k,(x+y))-min(k,(x+y));
	    if((x+y)>k)
	   cout<<"NO"<<endl;
	  else  if((x+y)==k)
	    cout<<"YES"<<endl;
	    else if(z%2==0 )
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}