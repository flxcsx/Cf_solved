/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n;
    string sj, sk;
    map<string, bool> mp;

    cin >> n;
    string str[n];
    int ans[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        mp[str[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
        ans[i] = 0;
        for (int j = 1; j < str[i].length(); j++)
        {
            sj = str[i].substr(0, j);
            sk = str[i].substr(j, str[i].length() - j);
            if (mp[sj] && mp[sk])
            {
                ans[i] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
    cout << "\n";
    mp.clear();
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