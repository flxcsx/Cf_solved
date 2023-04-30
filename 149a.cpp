/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int k;
    cin >> k;
    vector<int> m(12);
    for (int i = 0; i < 12; i++)
    {
        cin >> m[i];
    }
    int c = 0, t = 0;
    sort(m.begin(), m.end(), greater<int>());
    for (int i = 0; i <= 12; i++)
    {
        if (t < k && i < 12)
        {
            t += m[i];
            c++;
        }
        else if (t >= k)
        {
            cout << i;
            return;
        }
        else
        {
            cout << -1;
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