#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    set<int> s;
    cin >> n;
    while (n--)
    {
        int i;
        cin >> i;
        s.insert(i);
    }
    if (s.size() < 2)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        auto it = s.begin();
        cout << *++it;
    }
}