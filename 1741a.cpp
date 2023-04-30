#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0;i<t;i++)
    {
        string s1;
        cin >> s1;
        int r1;

        int q1 = s1.length();
        if (s1[q1-1] == 'S')
            r1 = -q1;
        else if (s1[q1-1] == 'L')
            r1 = q1;
        else
            r1 = 0;

        string s2;
        cin >> s2;

        int r2;

        int q = s2.length();
        if (s2[q-1] == 'S')
            r2 = -q;
        else if (s2[q-1] == 'L')
            r2 = q;
        else
            r2 = 0;

        if (r1 > r2)
            cout << ">";
        else if (r1 < r2)
            cout << "<";
        else
            cout << "=";
            cout << endl;
            //cout << r1 <<r2;

        
    }
    return 0;
}
