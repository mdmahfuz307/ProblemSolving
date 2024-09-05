// Young Physicist
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, f = 9, sum = 0;
    cin >> n;
    int a[n][3];
    for (i = 0; i < n;i++){
        for (j = 0; j < 3;j++){
            cin >> a[i][j];
        }
    }
    for (j = 0; j < 3;j++){
        for (i = 0; i < n;i++){
            sum = sum + a[i][j];
        }
        if(sum==0)
            f = 1;
            else
            {
            f = 0;
            break;
            }
    }
    if(f==1){
            cout << "YES";
    }
    else
            cout << "NO";
    return 0;
}