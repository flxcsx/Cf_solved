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
    map<int, int, greater<int>> a;
    for (int i = 0; i < n; i++)
    {
        a[i]++;
    }
    int c = 0;
    for (auto &x : a)
    {
        if (x.first >= n && x.first + 1 >= n - x.second)
        {
            // c++;
            n -= x.second;
        }
        else if (x.first >= n)
        {
            c++;
            n -= x.second;
        }
        else
        {
            n -= x.second;
        }
    }
    cout << c << "\n";
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