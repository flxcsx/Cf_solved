/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n, s, r;
    cin >> n >> s >> r;
    vector<int> ans(n - 1);
    vector<int> a;
    ans.push_back(s - r);
    int l = s - r;

    for (int i = 0; i < n - 1; i++)
    {
        ans[i] = 1;
        r = r - 1;
    }

    int c = 0;
    while (r != 0)
    {
        if (ans[c] < l)
        {
            ans[c]++;
            r--;
        }
        else
            c++;
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
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