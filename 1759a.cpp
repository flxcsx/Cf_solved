#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
yee:
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            char n = s[0];
            if (n == 89)
            {
                cout << "YES\n";
            }
            else if (n == 101)
            {
                cout << "YES\n";
            }
            else if (n == 115)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
            goto yee;
        }

        for (int i = 0; i < (s.size() - 1); i++)
        {
            char c = s[i];
            if (s[i] == 89 && s[i + 1] == 101)
            {
                continue;
            }
            else if (s[i] == 101 && s[i + 1] == 115)
            {
                continue;
            }
            else if (s[i] == 115 && s[i + 1] == 89)
            {
                continue;
            }
            else
            {
                cout << "NO\n";
                goto yee;
            }
        }
        cout << "YES\n";
    }
}