/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    ll suma = 0, sumb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        suma += a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        sumb += b[i];
    }
    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());

    int j = m - 1, i = 0;
    int temp = min(n, m);
    while (temp--)
    {
        suma -= a[i++];
        suma += b[j--];
    }
    cout << suma << "\n";
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