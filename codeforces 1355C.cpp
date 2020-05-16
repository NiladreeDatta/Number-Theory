#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dif[500005],pre[500005];
int main()
{
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    for(ll i = 0 ; i <= 500005 ; i++)
    {
        ll l = max(c,b+i);
        ll r = min(d,c+i);
        dif[i] = max(0LL,r-l+1);
    }
    for(ll i = 0 ; i <= 500005 ; i++)
    {
        pre[i+1] += pre[i] + dif[i];
    }
    ll ans  = 0;
    for(ll i = a ; i <= b ; i++) ans += pre[i];
    cout << ans << endl;
    return 0;
}
