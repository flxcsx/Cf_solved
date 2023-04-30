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
    if (n % 2 == 0)
    {
        cout << "YES\n";
        for (int i = 0; i < n / 2; i++)
        {
            cout << 1 << " " << -1 << " ";
        }
        cout << "\n";
    }
    else if (n >= 5)
    {
        cout << "YES\n";
        int a = ((n - 1) / 2) - 1, b = (1 - n) / 2;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << a << " ";
            }
            else
            {
                cout << b << " ";
            }
        }
        cout << "\n";
    }
    else
    {
        cout << "NO\n";
    }
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