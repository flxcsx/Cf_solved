#include <iostream>
using namespace std;

int main()
{
    int sum1 = 0, sum2 = 0;
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        s1[i] = tolower(s1[i]);
        //sum1 = sum1 + a;
        s2[i] = tolower(s2[i]);
        //sum2 = sum2 + b;
    }
    //for (int i = 0; i < s2.size(); i++)
    //{
    //    
    //}
    //cout << sum1 << endl << sum2;
    if (s1 < s2)
        cout << -1;
    else if (s1 > s2)
        cout << 1;
    else
        cout << 0;
        return 0;
}
