/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, m, r, b;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < n; i++)
        if (s[i] == 'R')
            r++;
        else
            b++;

    for (int i = 0; i < m; i++)
        if (t[i] == 'R')
            r++;
        else
            b++;
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