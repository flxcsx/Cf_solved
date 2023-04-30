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
    map<ll, ll> f;
    ll max = -1, min = inf;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        f[temp]++;
        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;
    }
    if (max > min)
        cout << max - min << " " << f[max] * f[min];
    else
        cout << 0 << " " << ((f[max] - 1) * f[min]) / 2;
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