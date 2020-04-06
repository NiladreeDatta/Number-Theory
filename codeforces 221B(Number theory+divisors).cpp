#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
ll a[10];
ll func(ll num)
{
    while(num)
    {
        if(a[num%10] == 1)
            return 1;
        num /= 10;
    }
    return 0;
}
int main()
{
    ll n,temp;
    cin >> n;
    temp = n;
    while(temp)
    {
        a[temp%10] = 1;
        temp /= 10;
    }
    ll ans = 0;
    /*for(int i = 1 ; i * i <= n ; i++)
    {
        if(n%i == 0)
        {
            ans += (func(i) + (i*i < n func(n/i)));
        }
    }*/
    for(int i = 1 ; i  <= n ; i++)
    {
        if(n%i == 0)
        {
            ans += func(i) ;
        }
    }
    cout << ans << endl;


    return 0;
}
