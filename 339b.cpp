#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    long long int t = 0;
    int ao = 1, an;
    cin >> n >> m;
    while (m--)
    {

        cin >> an;
        if (an < ao)
        {
            t = t + (n - ao + an);
            ao = an;
        }
        else if (an >= ao)
        {
            t = t + (an - ao);
            ao = an;
        }
    }
    cout << t;
}