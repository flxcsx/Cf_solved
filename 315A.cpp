/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int k, ans = 0;
    cin >> k;
    vector<int> a(k), b(k);
    for (int i = 0; i < k; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < k; i++)
    {
        int p = 0;
        for (int j = 0; j < k; j++)
            if (a[i] == b[j] & i != j)
                p = 1;
        if (p == 0)
            ans++;
    }
    cout << ans;
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