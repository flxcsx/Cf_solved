/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    int mina = inf, minb = inf, maxa = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mina = min(mina, a[i]);
        maxa = max(maxa, a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        minb = min(minb, b[i]);
    }
    int tl;
    if ((2 * mina < minb) && (maxa < minb))
    {
        cout << max(2 * mina, maxa);
        // cout << mina << " " << maxa << " " << minb;
    }
    else
    {
        cout << -1;
        // cout << mina << " " << maxa << " " << minb;
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