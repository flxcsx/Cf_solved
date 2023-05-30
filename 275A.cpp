/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    vector<int> a(9), b(9, 0);
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
    }
    cout << !((a[0] + a[1] + a[3]) % 2) << !((a[0] + a[1] + a[2] + a[4]) % 2) << !((a[1] + a[2] + a[5]) % 2) << "\n"
         << !((a[0] + a[3] + a[6] + a[4]) % 2) << !((a[1] + a[3] + a[4] + a[5] + a[7]) % 2) << !((a[2] + a[4] + a[5] + a[8]) % 2) << "\n"
         << !((a[3] + a[6] + a[7]) % 2) << !((a[4] + a[6] + a[7] + a[8]) % 2) << !((a[5] + a[8] + a[7]) % 2);
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