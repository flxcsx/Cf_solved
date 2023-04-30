#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int m, s, total = 0;
    cin >> m >> s;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < m; i++)
    {
        total += b[i];
    }
    total += s;
    int d = b.back();
    int x = 0;
    int sum = 0;
    while (1)
    {
        x++;
        sum += x;
        if (sum < total)
        {
            continue;
        }
        else if (sum > total)
        {
            cout << "NO\n";
            return;
        }
        else if ((sum == total) && (x >= d))
        {
            cout << "YES\n";
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}