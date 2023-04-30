#include <iostream>
using namespace std;

int main()
{
    string s;
    int dan = 0;
    cin >> s;
    for (int n = 0; n < s.size(); n++)
    {
        if (s[n] == s[n + 1])
        {
            dan++;
            if (dan == 6)
            {
                cout << "YES";
                return 0;
            }
            else
                continue;
        }
        else
            dan = 0;
    }
    cout << "NO";
    return 0;
}