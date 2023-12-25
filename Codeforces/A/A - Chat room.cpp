#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string c="hello";
    cin>>s;
    int n=s.size();
    int j=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==c[j])
        {
            j++;
            count++;
        }
    }
    if(count==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
