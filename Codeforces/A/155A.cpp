// I_love_%username%
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,count=0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a;i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < a;i++)
    {
        if
        (arr[i] > max)
        {
            max = arr[i];
            count++;
        }
        if(arr[i]<min)
        {
            min =arr[i];
            count++;
        }
    }
    cout << count;
}