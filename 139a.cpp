/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, t = 0;
    cin >> n;
    int d[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> d[i];
        t += d[i];
    }
    if (t > n)
    {
        int x = n / t;
        n -= x * t;
    }
    for (int i = 0; i < 7; i++)
    {
        n -= d[i];
        if (n < 1)
        {
            cout << i + 1;
            return;
        }
        else if (i == 6)
        {
            i = -1;
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