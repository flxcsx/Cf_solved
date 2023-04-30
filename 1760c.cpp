#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, o = 0;
        vector<int> v;
        vector<int> v2;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
            v2.push_back(temp);
        }
        sort(v2.begin(), v2.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] < v2.back())
            {
                cout << v[i] - v2.back() << " ";
            }
            else if (v[i] == v2.back())
            {
                cout << (v[i] - v2[n - 2])  << " ";
            }
        }
    }
}