#include <bits/stdc++.h>

using namespace std;
void solve()
{
     char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < 8; i++)
        {
            int  r =0;
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] == 'R')
                {
                    r++;
                    if (r == 8)
                    {
                        cout << "R\n";
                        return;
                    }
                }
                else
                {
                    r = 0;
                   break;
                }
            }
        }
        for (int i = 0; i < 8; i++)
        {
            int b=0;
            for (int j = 0; j < 8; j++)
            {
                if (a[j][i] == 'B')
                {
                    b++;
                    if (b == 8)
                    {
                        cout << "B\n";
                        return;
                    }
                }
                else
                {
                    b = 0;
                   break;
                }
            }
        }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       solve();
    }
    return 0;
}

