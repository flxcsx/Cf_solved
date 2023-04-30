/* ALTXT */

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, l;
    cin >> n >> l;
    vector<double> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double d = 0;
    for (int i = 1; i < n; i++)
    {
        d = max(d, a[i] - a[i - 1]);
    }
    float e = d / 2.0000000000;
    cout << setprecision(10) << e;
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