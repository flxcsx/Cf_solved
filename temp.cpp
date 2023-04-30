#include <iostream>

using namespace std;
int main()
{
    int m,n,t,d,ans,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=n*(n+1)/2;
        //cout<<ans<<endl;
        a=1;
        while(a<=n)
        {
            ans = ans - 2*a;
            a=a*2;
        }
        cout <<ans <<endl;
    }
        return 0;

}