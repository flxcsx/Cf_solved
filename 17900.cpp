/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int a = 0;
    string s;
    string ss = "314159265358979323846264338327";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        // char c = ss[i];
        if (s[i] == ss[i])
        {
            a++;
        }
        else
        {
            break;
        }
    }
    cout << a << "\n";
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