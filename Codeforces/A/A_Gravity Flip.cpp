// A-Gravity Flip (405)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num];
    for (int i = 0; i < num; i++)
        cin >> a[i];
    sort(a, a + num);
    for (int x : a)
        cout << x << " ";
    cout << endl;
    return 0;
}