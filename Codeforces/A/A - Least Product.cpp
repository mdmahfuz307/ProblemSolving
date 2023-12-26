#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		bool q=0;
		cin>>n;
		int v[n];
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			if(v[i]<0)c++;
			if(v[i]==0)q=1;
		}
		if(!q&&c%2==0)cout<<"1\n1 0\n";
		else cout<<"0\n";
	}
}
