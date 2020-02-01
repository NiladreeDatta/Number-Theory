#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,r,t,i,ans,cs=1,up,dwn,fact[1000009];
const ll mod = 1000003;

ll bigMod(ll b,ll p)
{
    if(p == 0) return 1;
    ll x = bigMod(b,p/2);

    x = (x*x)%mod;
    if(p%2 == 1) x = (x*b)%mod;
    return x;

}

int main()
{
    fact[0] = 1;
    for(i =  1 ; i <= 1000000 ; i++)
    {
        fact[i] = (fact[i-1]*i)%mod;
    }

    cin >> t;
    while(t--)
    {
        cin >> n >> r;
        up = fact[n];
        dwn = (fact[n-r]*fact[r])%mod;

        ans = (up*bigMod(dwn,mod-2))%mod;

        cout << "Case " << cs++ << ": " << ans << endl;

    }

    return 0;
}
