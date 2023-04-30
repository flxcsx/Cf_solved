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
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int th = 0, c = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        if (v[i].first == v[i + 1].first)
        {
            th++;
            if (th > 1)
            {
                c++;
            }
        }
        else
        {
            th = 0;
        }
    }
    // th = 0;
    // sort(v.begin(), v.end(), myComparison);
    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i].second == v[i + 1].second)
    //     {
    //         th++;
    //         if (th > 1)
    //         {
    //             c++;
    //         }
    //     }
    //     else
    //     {
    //         th = 0;
    //     }
    // }
    cout << c;
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