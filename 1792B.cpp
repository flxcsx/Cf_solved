/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int a = 0, b = 0, c = 0, x;
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    if (v[0] > 0)
        x = v[0] + min(v[1], v[2]) * 2 + min(v[0] + 1, abs(v[2] - v[1]) + v[3]);
    else
        x = 1;
    cout << x << "\n";
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