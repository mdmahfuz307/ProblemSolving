#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        for(int pw=1;pw<=n;pw=pw*10+1)
        {
            for(int d=1;d<=9;d++)
            {
                if(pw*d<=n)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
