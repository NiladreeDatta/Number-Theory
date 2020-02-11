#include<stdio.h>
#define mod 10000007

long long mult(long long a,long long b)
{
    long long d=1;
    while(b)
    {
        if(b%2 == 1)
        {
            d=(d*a)%mod;
        }
        //b>>=1;
        b /= 2;
        a=(a*a)%mod;
    }
    return d;
}
int main()
{
    long long int n,k;
    while(1)
    {
        scanf("%lld%lld",&n,&k);
        if(n==0 && k==0 )
            return 0;
        else
        {
            long long int s1, s2,s3,s4;
            s1 = (2 * mult(n-1,n-1) ) % mod;
            s2 = (2 * mult(n-1,k) ) % mod;
            s3 = mult(n,k);
            s4 = mult(n,n);
            long long int res = (s1 + s2 +s3 + s4) % mod;
            printf("%lld\n",res);
        }
    }

}
