/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a[i] = t + i + 1;
    }
    sort(a.begin(), a.end());
    int tp = 0;
    for (int i = 0; i < n; i++)
    {
        if (c >= a[i])
        {
            c -= a[i];
            tp++;
        }
        else
        {
            break;
        }
    }
    cout << tp << "\n";
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