// String Task
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin >> s;

    int x = s.length();

    for (int i = 0; i < x;i++)
    {
    if (s[i] == 'A' || s[i] == 'O' || s[i] == 'Y' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I' || s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i'){
        continue;
    }
    else
    {
        s2 += '.';
        s2 += towlower (s[i]);
    }
    }
cout << s2 << endl;
}