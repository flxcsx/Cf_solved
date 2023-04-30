/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int d, f;
    cin >> d >> f;
    int h = 1;
    cout << h << " ";
    for (int i = 1; i < d; i++)
    {
        if (f - h - i + 1 >= d - i)
        {
            h += i;
        }
        else
            h++;
        cout << h << " ";
    }
    cout << endl;
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