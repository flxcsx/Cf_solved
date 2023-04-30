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
    // map<int, int> s;
    vector<int> s(5);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s[temp]++;
    }
    int t = 0;
    t = s[4];
    t += s[3];
    s[1] -= s[3];
    s[1] = max(0, s[1]);
    if (s[2] % 2 == 0)
        t += s[2] / 2;
    else
    {
        t += (s[2] / 2) + 1;
        s[1] -= 2;
        s[1] = max(0, s[1]);
    }
    if (s[1] % 4 == 0)
        t += s[1] / 4;
    else
        t += (s[1] / 4) + 1;

    cout << t;
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