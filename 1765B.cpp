/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n;
    string s;
    bool c = 0;
    cin >> n >> s;
    int g = 0;
    for (int i = 0; i < n; i++)
    {
        if (g % 2 != 0)
        {
            if (s[i] == s[i + 1])
            {
                i++;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
        g++;
    }

    cout << "YES\n";
    return;
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