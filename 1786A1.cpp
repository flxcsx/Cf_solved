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
    ll a = 0, b = 0;
    int j = 0, i = 1;
    while (n > 0)
    {
        if (j % 2 == 0)
        {
            if (n >= i)
            {
                n -= i;
                a += i;
            }
            else
            {
                a += n;
                n = 0;
            }
        }
        else
        {
            if (n >= i)
            {
                n -= i;
                b += i;
            }
            else
            {
                b += n;
                n = 0;
            }
        }
        j++;
        i += 4;
    }
    cout << a << " " << b << "\n";
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