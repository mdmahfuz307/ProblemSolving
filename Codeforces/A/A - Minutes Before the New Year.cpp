#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        if(m==0)
        {
            cout<<(24-h)*60<<endl;
        }
        else{
            cout<<(23-h)*60 + (60-m)<<endl;
        }
    }
}    
