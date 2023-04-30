/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    string a, b;
    int l = 0, c = 0;
    vector<char> s;
    cin >> a >> b;
    for (int i = 0; i <= a.size(); i++)
    {
        for (int j = 0; j <= b.size(); j++)
        {
            if (a[i] == b[j])
            {
                s.push_back(b[j]);
                l++;
            }
            else if ((a[i - 1] == b[j - 1]) & (a[i] != b[j]))
            {
                s.push_back('*');
                c++;
                i--;
            }
            else
            {
                i--;
            }
        }
    }
    if ((l > 0) & (l >= c))
    {

        cout << "YES\n";
        for (auto x : s)
        {
            cout << x;
        }
        cout << "\n";
    }
    else
    {
        cout << "NO\n";
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