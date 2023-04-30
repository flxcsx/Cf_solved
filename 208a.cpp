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
    bool check = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' & s[i + 1] == 'U' & s[i + 2] == 'B')
        {
            i += 2;
            if (check)
            {
                cout << " ";
                check = 0;
            }
        }
        else
        {
            cout << s[i];
            check = 1;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int Test = 1;
    // cin >> Test;
    for (int T = 1; T <= Test; T++)
    {
        solve();
    }
    return 0;
}