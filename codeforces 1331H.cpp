#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans = 1
    ;
    cin >> n;
    int x = n /1000;
    int mod = n % 1000;
    if(n%2 == 0)
    {
        for(int i = x ; i >= 1 ; i = i - 2)
            ans = ((ans %mod) * (i%mod)) % mod;
    }
    else
    {
        for(int i = x ; i >= 2 ; i = i - 2)
            ans = ((ans %mod) * (i%mod)) % mod;
    }
    cout << ans % mod << endl;

    return 0;
}

