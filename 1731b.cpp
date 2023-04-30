/* ALTXT */

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int

const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;

void solve()
{
    int n;
    cin >> n;
    // ll ans = (2022 * ((2*n * (n - 1)) / 3 + (n * (n + 1) * (2 * n + 1)) / 6)) % mod;
    ll ans = (((n * (n + 1) * ((2 * n) + 1)) / 6) - ((n * (n + 1)) / 2));
    cout << (ans * 2022) % mod << "\n";
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