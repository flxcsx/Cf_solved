#include <iostream>
using namespace std;

int main()
{
    int X = 0, Y = 0, Z = 0, x, y, z, n;
    cin >> n;

    while (n--)
    {
        cin >> x >> y >> z;
        X = X + x;
        Y += y;
        Z += z;
    }
    if (X == 0 && Y == 0 && Z == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}