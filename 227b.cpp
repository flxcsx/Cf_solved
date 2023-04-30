#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, l = 0, r = 0;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
    {
      //  cin >> arr[i];
    long x;
    cin >> x;
    arr[x] = i;
    }
    long m,b;
    cin >> m;
    while (m--)
    {
        cin >>b;
    
        l += (arr[b]+1);
        r += (n -arr[b]);
        
        
         

    
        
    }
    cout << l << " " << r;
}