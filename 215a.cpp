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
        // int temp;
        cin >> a[i];
        // a.push_back(temp);
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        // int temp;
        cin >> b[i];
        // a.push_back(temp);
    }
    int max = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            float q = b[j] * (1.0) / a[i];
            if (floor(q) == q)
            {
                if (q == max)
                {
                    c++;
                }
                else if (q > max)
                {
                    max = q;
                    c = 1;
                }
            }
        }
    }
    cout << c;
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