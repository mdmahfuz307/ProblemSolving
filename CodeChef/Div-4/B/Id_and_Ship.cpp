#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char n;
        cin >> n;
        n = toupper(n);
        switch (n)
        {
        case 'B':
            cout << "BattleShip" << endl;
            break;
        case 'C':
            cout << "Cruiser" << endl;
            break;
        case 'D':
            cout << "Destroyer" << endl;
            break;
        default:
            cout << "Frigate" << endl;
            break;
        }
    }
    return 0;
}