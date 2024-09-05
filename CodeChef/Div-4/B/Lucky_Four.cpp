#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int r, n;
    int count = 0;
    while (t--)
    {
        cin >> n;

        while (n != 0)
        {
            r = n % 10;
            if (r == 4)
                count++;
            n /= 10;
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}