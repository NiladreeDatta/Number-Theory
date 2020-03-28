#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli gcd(lli a, lli b)
{
    if(a == 0) return b;
    if(b == 0) return a;

    if(b > a) swap(a,b);
    return gcd(b,a%b);
}

int main()
{
    lli tc,a,b,x=1;
    cin >> tc;
    while(tc--)
    {
        cin >> a >> b;
        printf("Case %lld: %lld\n",x++,(a+b)/gcd(a,b));
    }

    return 0;
}
