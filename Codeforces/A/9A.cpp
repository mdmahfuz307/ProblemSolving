// A. Die Roll
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int c = max(x, y);
    c = 6 - c;
    c++;
    int d = 6;
    if(c==6)
    {
        c /= 6;
        d /= 6;
    }
    else if(c==4){
        c /= 2;
        d /= 2;
    }
    else if(c==3){
        c /= 3;
        d /= 3;
    }
    else if(c==2){
        c /= 2;
        d /= 2;
    }
    cout << c << "/" << d;
    return 0;
}