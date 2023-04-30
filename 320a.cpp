/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        // if ((i < n.size() - 2) && (n[i] == '1') && (n[i + 1] == '4') && (n[i + 2] == '4'))
        // {
        //     i + 2;
        //     continue;
        // }
        // else if ((i < n.size() - 1) && (n[i] == '1') && (n[i + 1] == '4'))
        // {
        //     i++;
        //     continue;
        // }
        // else if (n[i] == '1')
        // {
        //     continue;
        // }
        // else
        // {
        //     cout << "NO" << i;
        //     return;
        // }

        if (n[i] == '1')
        {
            if ((i < n.size() - 1) && n[i + 1] == '4')
            {
                if ((i < n.size() - 2) && n[i + 2] == '4')
                {
                    i++;
                }
                i++;
            }
        }
        else
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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