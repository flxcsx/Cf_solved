/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, m = inf;
    cin >> n;
    vector<int> a(n);
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        m = (min(m, a[i]));
    }
    if (a[0] > m)
        cout << "Alice\n";
    else
        cout << "Bob\n";
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