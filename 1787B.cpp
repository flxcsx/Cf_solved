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
    map<int, int> a;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a[i]++;
            n = n / i;
            i--;
        }
    }
    int mx = 0, f = 0, at = 1;
    for (auto &x : a)
        mx = max(mx, x.second);
    for (int i = 0; i < mx; i++)
    {
        int mn;
        for (auto &x : a)
            if (x.second >= 1)
            {
                mn = min(x.second, mn);
                at = at * x.first;
            }
        if (mn == 1)
            break;
        f += at * mn;
        for (auto &x : a)
        {
            x.second - mn;
        }
    }
    cout << f << "\n";
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