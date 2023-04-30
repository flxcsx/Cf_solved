#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = s.size();
    for (int x = 0; x < i; x++)
    {
        if (s[x] == 45)
        {
            if (s[x + 1] == 45)
            {
                cout << "2";
                x++;
            }
            else
            {
                cout << "1";
                x++;
            }
        }
        else
            cout << "0";
    }
    return 0;
}