/* ALTXT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9 + 5;
const int64_t INF = 1e18 + 5;
int tree[800011], a[200011];
int fa[200011], m, n, q, l, r, t;
int find(int x) { return fa[x] == x ? x : fa[x] = find(fa[x]); }
void add(int x, int y)
{
    while (x <= n)
        tree[x] += y, x += (x & -x);
}
int qry(int x)
{
    int r = 0;
    while (x)
        r += tree[x], x -= (x & -x);
    return r;
}
int calc(int x)
{
    int s = 0;
    while (x)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        add(i, a[i]);
        fa[i] = i;
    }
    fa[n + 1] = n + 1;
    while (m--)
    {
        cin >> q;
        if (q == 2)
        {
            int x;
            cin >> x;
            cout << qry(x - 1) << "\n";
        }
        else
        {
            cin >> l >> r;
            for (int i = l; i <= r; add(i, (t = calc(a[i])) - a[i]), a[i] = t, fa[i] = (calc(a[i]) == a[i]) ? i + 1 : i, i = (find(i) == i) ? i + 1 : fa[i])
                ;
        }
        for (int i = i; i <= n; ++i)
            add(i, -a[i]);
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