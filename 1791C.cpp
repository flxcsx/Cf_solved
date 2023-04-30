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
    string s;
    cin >> s;
    int f = n;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == '0' & s[n - i - 1] == '1')
        {
            f -= 2;
        }
        else if (s[i] == '1' & s[n - i - 1] == '0')
        {
            f -= 2;
        }
        else
        {
            break;
        }
    }
    cout << f << "\n";
    return;
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