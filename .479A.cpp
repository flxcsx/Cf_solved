#include <iostream>
using namespace std;
void comp(int x, int y)
{
    if (x >= y)
    {
        cout << (y + 1) * x;
        return;
    }
    else if(x < y)
    {
        cout << (x + 1) * y;
        return;
    }
}
int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    if (a == 1 && b == 1 && c == 1)
    {  cout << 3;
        return 0;
    }
    if (a == 1)
        comp(b, c);
    else if (b == 1)
        comp(a, c);
    else if (c == 1)
        comp(a, b);
    else
        cout << (a * b) * c;

    return 0;
}
