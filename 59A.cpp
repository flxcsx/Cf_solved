/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    string s;
    int c = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] > 96)
            c++;
    if (c < s.size() - c)
    {
        for (int i = 0; i < s.size(); i++)
            if (s[i] > 96)
                s[i] -= 32;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
            if (s[i] < 96)
                s[i] += 32;
    }
    cout << s;
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