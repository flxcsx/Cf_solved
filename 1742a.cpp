#include <bits/stdc++.h>

using namespace std;

void compare(int x, int y, int z)
{
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        if (x == y + z)
        {
                cout << "Yes\n";
        }
        else if (y == x + z)
        {
    
                cout << "yes\n";
        }
        else if (z == y + x)
        {
                cout << "yes\n";
        }
        else
            cout << "no\n";
    }
}