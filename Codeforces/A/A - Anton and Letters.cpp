#include <bits/stdc++.h>
using namespace std;


int main ()
{
    int count = 0;
    string s;
    getline(cin, s);
    sort(s.begin(),s.end());

    for(int i=0; i<s.size(); i++) {

        if(s[i]>='a' && s[i]<='z' && s[i]!=s[i+1])
        {
            count++;
        }

    }

    cout<<count<<endl;
    return 0;
}

