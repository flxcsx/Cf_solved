/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int k, n;
    cin >> k >> n;

    int h = 1;
    cout << h << " ";
    for (int i = 1; i < k; i++)
    {
        if (n - h - i + 1 >= k - i)
        {
            h += i;
        }
        else
            h++;
        cout << h << " ";
    }
    cout << "\n";
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