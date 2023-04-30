#include <iostream>

using namespace std;

int main()
{
    int l, t;
    cin >> l >> t;
    char a[l];

    for (int i = 0; i < l; i++)
    {
        cin >> a[i];
    }
    while (t--)
    {
        for (int x = 0; x < l - 1; x++)
        {
            if (a[x] == 66 && a[x + 1] == 71)
            {
                a[x] = 71;
                a[x + 1] = 66;
                x++;
            }
        }
    }
    for (int i = 0; i < l; i++)
    {
        cout << a[i];
    }
    return 0;
}