// A. Vasya the Hipster
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if (a >= b)
    {
        a = a-b;
        a = a/2;
        cout << b << ' ' << a << endl;
    }
    else
    {
        b = b-a;
        b = b/2;
        cout << a << ' ' << b << endl;
    }

    return 0;
}