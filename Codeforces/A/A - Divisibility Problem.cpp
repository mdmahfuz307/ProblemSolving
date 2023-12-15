#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a%b==0)
            cout<<"0"<<endl;
        else
        {
            int v=a/b;//0
            int x=(v+1)*b;//456
            cout<<x-a<<endl;
        }
    }
    return 0;
}
