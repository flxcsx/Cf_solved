/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

bool myComparison(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}

void solve()
{
    int n, t(0);
    cin >> n;
    int x[n], y[n];

    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    for (int i = 0; i < n; i++)
    {
        bool r(0), l(0), u(0), d(0);
        for (int j = 0; j < n; j++)
        {
            if (x[j] > x[i] and y[j] == y[i])
                r = 1;
            if (x[j] < x[i] and y[j] == y[i])
                l = 1;
            if (x[j] == x[i] and y[j] > y[i])
                u = 1;
            if (x[j] == x[i] and y[j] < y[i])
                d = 1;
        }
        if (r and l and u and d)
            t++;
    }

    cout << t << endl;
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