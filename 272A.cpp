#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s = 0, f = 0,a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        s += a;
    }
    for (int i = 1; i <= 5; i++)
    {
        if ((s + i) % (n + 1) != 1)
            f++;
    }
    cout << f;
}