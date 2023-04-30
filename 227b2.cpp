#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[temp] = i;
    }
    int m;
    long long v = 0, p = 0;
    cin >> m;
    while(m--)
    {
        int b;
        cin >> b;
        v += (a[b]+1);
        p += (n - a[b]);
    }
    cout << v << " " << p;
    return 0;
}