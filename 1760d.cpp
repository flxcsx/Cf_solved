#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        while (n--)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        int count;
        for(int i =0;i<n;i++){
if((i==(n-1))  && (v[i] == v[i+1])){

}
else if(((i ==0) ||(v[i-1] > v[i]))){
count++;
}
else if((i == (n-1)) || v[n-1] < v[n]){
    count++;
}
        }
    }
}