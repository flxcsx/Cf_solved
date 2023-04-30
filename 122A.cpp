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
    if (n % 4 == 0 | n % 7 == 0 | n % 44 == 0 | n % 47 == 0 | n % 77 == 0 | n % 444 == 0 | n % 447 == 0 | n % 474 == 0 | n % 477 == 0 | n % 744 == 0 | n % 747 == 0 | n % 774 == 0 | 777 == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";
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