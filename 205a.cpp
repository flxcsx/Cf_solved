/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n;
    cin >> n;
    // vector<int> t(n);
    int t;
    int min = inf, fti;
    string fts;
    fts[0] = '\0';
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t < min)
        {
            min = t;
            fti = i + 1;
            fts[0] = '\0';
        }
        else if (t == min)
        {
            fts = "Still Rozdil";
            fti = 0;
        }
    }
    if (fti == 0)
    {
        cout << fts;
    }
    else
    {
        cout << fti;
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