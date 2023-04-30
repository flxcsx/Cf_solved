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
    string s, u, t;
    cin >> s;
    int a = 1, b = 0;
    n--;
    while (n--)
    {
        cin >> t;
        if (t == s)
            a++;
        else
        {
            u = t;
            b++;
        }
    }
    if (a > b)
        cout << s;
    else
        cout << u;
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