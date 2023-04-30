#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    here:
    while (t--)
    {
        
        int n, m;
        cin >> n;
        m = n;
        int a[n];
        while (n--)
            cin >> a[n];

        sort(a,a+n);
        for (int i = 0; i < m; i++)
        {
            for (int j = i + 1; j < m; j++)
            {
                if (a[i] == a[j])
                {
                    cout << "NO\n";
                    goto here;
                }
            }
        }
        cout << "YES\n";
    }
}