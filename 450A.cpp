/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, m, ans = 0, p = 0;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % m == 0)
            a[i] = temp / m;
        else
            a[i] = (temp / m) + 1;
        // a[i] = ceil(temp / m);
        if (ans <= a[i])
        {
            ans = a[i];
            p = i + 1;
        }
    }
    cout << p;
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