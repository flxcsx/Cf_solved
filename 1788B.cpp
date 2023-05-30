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
        cout << n / 2 << " " << n / 2 << "\n";
    }
    else
    {
        int x = 0, y = 0;

        int s = trunc(log10(n)) + 1;
        for (int i = 0; i < s; i++)
        {
            int a = n % 10;
            n = n / 10;
            // if (i == 0)
            // {
            //     x = ((a + 1) / 2);
            //     y = ((a - 1) / 2);
            // }
            // else
            // {
            if (a == 0)
            {
                continue;
                swap(x, y);
            }
            if (a % 2 == 0)
            {
                x += ((a)*5) * pow(10, i - 1);
                y += ((a)*5) * pow(10, i - 1);
                continue;
            }
            x += ((a - 1) * 5) * pow(10, i - 1);
            y += ((a + 1) * 5) * pow(10, i - 1);

            swap(x, y);
            // }
        }
        cout << x << " " << y << "\n";
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