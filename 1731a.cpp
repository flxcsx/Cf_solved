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
    vector<ll> a(n);
    int m1 = 0, m2 = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // c =c+ a[i];
        // if (a[i] > m1)
        // {
        //     m2 = m1;
        //     m1 = a[i];
        // }

        // else if (a[i] > m2)
        // {
        //     m2 = a[i];
        // }
        // else
        // {
        //     c = c + a[i];
        // }
    }

    sort(a.begin(), a.end());
    while (a[n - 1] * a[n - 2] != a[n - 1])
    {
        a[n - 1] = a[n - 1] * a[n - 2];
        a[n - 2] = 1;
        sort(a.begin(), a.end());
    }
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    cout << 2022 * s << "\n";
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