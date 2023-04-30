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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = n - 1, mx = n, mn = 1;
    while (l < r)
    {

        if (a[l] == mn)
        {
            mn++;
            l++;
        }
        else if (a[l] == mx)
        {
            mx--;
            l++;
        }
        else if (a[r] == mn)
        {
            mn++;
            r--;
        }
        else if (a[r] == mx)
        {
            mx--;
            r--;
        }
        else
            break;
    }
    if (l < r)
    {
        cout << l + 1 << " " << r + 1 << "\n";
    }
    else
        cout << -1 << "\n";
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