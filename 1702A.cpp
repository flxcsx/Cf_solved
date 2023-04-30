
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        long long k = m;
        
        if (m == 1)
        {
            cout << "0\n";
        }
        else
        {
            int c = 0;
            while (m != 0)
            {
                m /= 10;
                c++;
            }
           int h =  (k - pow(10,(c-1)));
           cout << h << "\n";
        }
    }
    return 0;
}