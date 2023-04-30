#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    set<int> s1;
    set<int> s2;
    set<int> s3;
    vector<int> p(t);
    for (int i = 0; i < t; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            s1.insert(p[i]);
        }
        else if (n == 2)
        {
            s2.insert(p[i]);
        }
        else
        {
            s3.insert(p[i]);
        }
    }
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            s1.insert(p[i]);
        }
        else if (n == 2)
        {
            s2.insert(p[i]);
        }
        else
        {
            s3.insert(p[i]);
        }
    }
    int c;
    cin >> c;
    for(int i=0;i<c;i++)
    {
        // cout<<2<<"\n";
        int n;
        cin >> n;
        if (n == 1)
        {
            auto it = s1.begin();
            if (s1.size() > 0)
            {
                cout << *it << " ";
            }
            else
            {
                cout << "-1 ";
            }
            s2.erase(*it);
            s3.erase(*it);
            s1.erase(*it);
        }
        else if (n == 2)
        {
            auto it = s2.begin();
            if (s2.size() > 0)
            {
                cout << *it << " ";
            }
            else
            {
                cout << "-1 ";
            }
            
            s1.erase(*it);
            s2.erase(*it);
            s3.erase(*it);
            // s1.erase(it);
            // s2.erase(it);
            // s3.erase(it);
        }
        else
        {
            auto it = s3.begin();
            if (s3.size() > 0)
            {
                cout << *it << " ";
            }
            else
            {
                cout << "-1 ";
            }
            
            s1.erase(*it);
            s2.erase(*it);
            s3.erase(*it);
            // s1.erase(it);
            // s2.erase(it);
            // s3.erase(it);
        }
    }
}