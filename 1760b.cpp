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
        vector<char>v(n);
        for(int i =0;i<n;i++){
            char s;
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        int ans = v.back();
        cout << ans-96 << endl;
    }
}