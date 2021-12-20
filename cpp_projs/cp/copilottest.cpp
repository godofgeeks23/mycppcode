#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if ((x1 >= 1 && x1 <= 8) && (x2 >= 1 && x2 <= 8) && (y1 >= 1 && y1 <= 8) && (y2 >= 1 && y2 <= 8))
        {
            if (x1 == x2 || y1 == y2)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }
    return 0;
}