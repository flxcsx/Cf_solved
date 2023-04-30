#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> u;
    for (int i = 0; i < s.size(); i++)
    {
        char t = s[i];
        u.insert(t);
    }
    if (u.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}