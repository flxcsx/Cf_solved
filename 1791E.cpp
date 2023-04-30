/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;
bool par(int &a, int &b)
{
    return (abs(a) < abs(b));
}
void solve()
{
    ll n, s = 0, nv = 0, o = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 1)
            nv++;
        if (a[i] == 0)
            o++;
    }
    if ((nv + o) % 2 == 0)
        for (int i = 0; i < n; i++)
            s += abs(a[i]);

    else
    {
        sort(a.begin(), a.end(), par);
        for (int i = 0; i < n; i++)
        {

            if (i == 0)
                s -= abs(a[i]);
            else
                s += abs(a[i]);
        }
    }
    cout << s << "\n";
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