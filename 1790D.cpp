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
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int r = 0;
    while (!s.empty())
    {
        int z = *s.begin();
        r++;
        for (int cur = z;; cur++)
        {
            auto itr = s.find(cur);
            if (itr == s.end())
            {
                break;
            }
            else
            {
                s.erase(itr);
            }
        }
    }
    cout << r << "\n";
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