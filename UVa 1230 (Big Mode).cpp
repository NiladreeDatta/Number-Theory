#include<bits/stdc++.h>
using namespace std;

long long int BigMod(long long int a,long long b,long long m)
{
    if(b == 0) return 1;
    int res = BigMod(a,b/2,m);
    if(b%2 == 1) return ((res%m)*(res%m)*(a%m))%m;
    else return ((res%m)*(res%m))%m;

}

int main()
{
    long long int n,a,b,m,ans;
    while(scanf("%lld",&n) == 1)
    {
        if (n == 0) break;
        while(n--)
        {
            scanf("%lld %lld %lld",&a,&b,&m);
            ans = BigMod(a,b,m);
            printf("%lld\n",ans);
        }


    }

    return 0;
}
