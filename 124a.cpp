/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, a, b, c = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        if ((i > a) && ((n - i) <= b))
            c++;
    }
    cout << c;
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