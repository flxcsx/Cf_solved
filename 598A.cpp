#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        ll ans;
        cin >> n;
        ans = (n * (n + 1)) / 2;
        int i=1;
        while(i<=n)
        {
            ans -= 2*i;
            i*=2;
        }
        cout << ans << endl;
    }
    return 0;
}