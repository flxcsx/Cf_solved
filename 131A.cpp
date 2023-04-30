#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        char c = a[i];
        if (i == 0)
        {
            a[i] = toupper(c);
        }
        else
            a[i] = tolower(c);
    }
    cout << a;
}