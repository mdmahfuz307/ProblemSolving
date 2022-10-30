#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, kk;
        cin >> n >> kk;
        string s;
        cin >> s;
        int k = -1, j = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                k = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                j = i;
                break;
            }
        }
        if (k == -1 && j == -1)
        {
            cout << s << endl;
            continue;
        }

        int cnt = kk;
        for (int i = k - 1; i >= 0; i--)
        {
            if (cnt > 0)
                s[i] = '1';
            else
                break;
            cnt--;
        }
        cnt = kk;
        for (int i = j + 1; i < n; i++)
        {
            if (cnt > 0)
                s[i] = '1';
            else
                break;
            cnt--;
        }

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                v.push_back(i);
        }

        for (int i = 0; i < v.size() - 1; i++)
        {
            int a = v[i] + 1;
            int b = v[i + 1] - 1;
            cnt = kk;
            while (b - a >= 1 && cnt > 0 && b > a)
            {
                s[b] = '1';
                s[a] = '1';
                b--;
                a++;
                cnt--;
            }
        }
        cout << s << endl;
    }
}
