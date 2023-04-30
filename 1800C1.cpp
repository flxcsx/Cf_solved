/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n;
    ll t = 0;
    cin >> n;
    priority_queue<int> a;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.push(tmp);
        if (tmp == 0)
            t += a.top(), a.pop();
    }

    cout << t << "\n";
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