#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int M = 998244353,k;
    cin >> n >> k;
    vector <int> v;
    long long sum = 0,ans = 1,p = -1 ;
    for(int i = 1 ; i <= n ; i++)
    {
        int x;
        cin >> x;
        if(x >= n-k+1)
        {
            sum += x;
            v.push_back(i);
        }
    }
    for(int i = 0 ; i < v.size() - 1 ; i++)
    {
        ans = ((ans% M) * (v[i+1]-v[i])%M)%M;
    }
    cout << sum <<" " <<  ans <<  endl;
    return 0;
}
