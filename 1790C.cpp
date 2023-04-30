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
    int ans[n][n - 1];
    vector<int> p(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> ans[i][j];
        }
        p[ans[i][0]]++;
    }
    int f = -1;
    for (int i = 1; i <= n; i++)
    {
        if (p[i] == n - 1)
            f = i;
    }
    cout << f << " ";
    for (int i = 0; i < n; i++)
    {
        if (ans[i][0] != f)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cout << ans[i][j] << " ";
            }
            break;
        }
    }
    cout << "\n";
}

//     for (int i = 0; i < n; i++)
//     {
//         memset(p, 0, sizeof(p));
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             p[x] = true;
//         }

//         for (int x = 1; x <= n; x++)
//         {
//             if (!p[x])
//             {
//                 cout << x << " ";

//                 break;
//             }
//         }
//     }
//
// }

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