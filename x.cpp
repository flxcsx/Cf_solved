#include <bits/stdc++.h>

using namespace std;
#define ll long long

#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main()
{
    int Test = 1;
    cin >> Test;
    for (int T = 1; T <= Test; T++)
    {
        ll n, m, k, mod = 1000000007;
        cin >> n;
        ll ans = 1;
        //     for(int i=0;i<n;i++){

        //     }
        // int a[n][n];
        ll sq = ((n * (n + 1) % mod * (2 * n + 1) % mod * 2022 % mod) * binpow(6, mod - 2));
        ll add = ((n - 1) * (n) % mod * (n + 1) % mod * 2022 % mod * binpow(3, mod - 2));
        debug(sq);
        debug(add);
        ll temp = (sq + add) % mod;
        ans = (temp) % mod;

        cout << ans << "\n";
    }
    return 0;
}