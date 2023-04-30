/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n), r(n), a(51);

    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
        if ((k >= l[i]) && (k <= r[i]))
            for (int j = l[i]; j <= r[i]; j++)
            {
                a[j]++;
            }
    }
    sort(a.begin(), a.end(), greater<int>());
    if (a[0] > a[1])
        cout << "YES\n";
    else
        cout << "NO\n";
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