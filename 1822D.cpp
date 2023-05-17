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
    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    if (n % 2 == 0)
    {
        cout << n << " ";
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
            else
            {
                cout << n - i << " ";
            }
        }
        cout << "\n";
    }
    else
        cout << "-1"
             << "\n";
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