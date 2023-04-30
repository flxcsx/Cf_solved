#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p=0;
    cin >> n;
    int m = 2 * n;
    set<int> s;
    while (m--)
    {
        int x;
        cin >> x;
        int d = s.size();
        if (s.count(x) == 0)
        {
            s.insert(x);
            p = max(p,d);
        }
        else
        {
            s.erase(x);
            p = max(p,d);
        }
    }
    cout << p;
}