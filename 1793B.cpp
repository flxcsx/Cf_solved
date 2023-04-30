/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int x, y;
    cin >> x >> y;
    cout << 2 * abs(x - y) << "\n";
    int m = x, n = y;
    for (int i = 0; i < (2 * abs(x - y)); i++)
    {
        if (i < abs(x - y))
        {

            cout << m << " ";
            m -= 1;
        }
        else
        {

            cout << n << " ";
            n += 1;
        }
    }
    cout << "\n";
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