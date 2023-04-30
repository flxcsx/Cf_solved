/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int k;
    string s;
    cin >> k >> s;
    map<char, int> m;
    vector<char> fin(s.size());
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (((it->second * (1.0)) / k) != (it->second / k))
        {
            cout << -1;
            return;
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (auto it = m.begin(); it != m.end(); it++)
        {
            int j = (it->second / k);
            while (j--)
            {
                // fin.push_back(it->first);
                cout << it->first;
            }
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