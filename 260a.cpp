/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    unsigned ll a, b, n;
    cin >> a >> b >> n;
    // cout << a;
    for (int i = 0; i < n; i++)
    {

        if ((((a * 10) + 9) % b <= 9) && (((a * 10) + 9) % b >= 0))
        {
            int r = ((a * 10) + 9) % b;
            a = (a * 10) + (9 - r);
            // cout << 9 - r;
        }
        else
        {
            a = -1;
            break;
        }
    }
    cout << a;
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