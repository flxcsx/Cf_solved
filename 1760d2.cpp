#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int p = 1;
        for (int i = 0; i < n - 1 && p == 1; i++)
        {
            if (v[i] < v[i + 1])
            {
                p = 0;
                while (v[i + 1] >= v[i] && i < n - 1)
                {
                    i++;
                }
                if (i == n - 1)
                {
                    cout << "YES" << "\n";
                    break;
                }
                else
                {
                    cout << "NO" << "\n";
                }
            }
        }
        if (p == 1)
        {
            cout << "YES" << "\n";
        }
    }
}
