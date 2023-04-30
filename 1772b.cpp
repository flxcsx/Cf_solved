/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int a[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    int c = 1;
    for (int i = 0; i < 4; i++)
    {
        if ((a[0][0] < a[1][0]) && (a[0][0] < a[0][1]) && (a[1][0] < a[1][1]) && (a[0][1] < a[1][1]))
        {
            c = 0;
            break;
        }
        int temp = a[0][0];
        a[0][0] = a[1][0];
        a[1][0] = a[1][1];
        a[1][1] = a[0][1];
        a[0][1] = temp;
    }
    if (c == 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
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
        // cout << "NO\n";
    }
    // cout << "NO\n";
    return 0;
}