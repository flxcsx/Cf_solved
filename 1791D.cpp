/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> cnt(26, 0), p(26, 0);
    int ans = 0;
    for (auto x : s)
    {
        cnt[x - 97]++;
    }
    for (auto x : s)
    {
        p[x - 97]++;
        cnt[x - 97]--;
        int c = 0;
        for (int j = 0; j < 26; j++)
        {
            c += min(1, cnt[j]) + min(1, p[j]);
        }
        ans = max(ans, c);
    }

    cout << ans << "\n";
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ll Test = 1;
    cin >> Test;
    for (ll T = 1; T <= Test; T++)
    {
        solve();
    }
    return 0;
}