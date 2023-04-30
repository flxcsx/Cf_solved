/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << 1 << "\n";
        return;
    }
    int c = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0' && s[i + 1] != '1')
        {
            if (s[i + 1] == '0')
            {
                c++;
                cout << c << "\n";
                return;
            }
            else
            {
                c++;
            }
        }
        }
    cout << c << "\n";
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int Test = 1;
    cin >> Test;
    for (int T = 1; T <= Test; T++)
    {
        solve();
    }
    return 0;
}