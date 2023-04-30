#include <iostream>
using namespace std;

int main()
{
    int m,n,a;
    cin >> m >>n >>a;
    
    long long x = m/a,y = n/a;
    if (m%a != 0)
    {
        x +=1;
    }
    if (n%a != 0)
    {
        y +=1;
    }
    cout << x*y;
    return 0;
}