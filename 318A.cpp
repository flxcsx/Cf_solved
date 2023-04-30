#include <iostream>
using namespace std;

int main()
{
    long long n, k, mid, ans;
    cin >> n >> k;

    if (n % 2 == 0)
        mid = n / 2;
    else if (n % 2 != 0)
        mid = (n / 2) + 1;
    if (k > mid)
        ans = 2 * (k -= mid);
    else
        ans = (2 * k) - 1;
        cout << ans;
}