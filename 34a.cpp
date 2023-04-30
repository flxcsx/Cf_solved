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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int diff = inf, fa1, fa2;
    for (int i = 0; i < n; i++)
    {
        if ((i != n - 1) && (abs(a[i] - a[i + 1]) < diff))
        {
            diff = abs(a[i] - a[i + 1]);
            fa1 = i + 1;
            fa2 = i + 2;
        }
        else if (i == n - 1 && abs(a[i] - a[0]) < diff)
        {
            diff = abs(a[i] - a[0]);
            fa1 = i + 1;
            fa2 = 1;
        }
    }
    cout << fa1 << " " << fa2;
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