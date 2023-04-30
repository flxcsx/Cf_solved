#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x % 2 == 0 && x != 2)
        cout << "yes";
    else
        cout << "no";
    return 0;
}