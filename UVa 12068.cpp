#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int  b)
{
    if(b == 0)return a;
    if(a == 0)return b;
    if(b > a) swap(a,b);
    return gcd(b,a%b);
}

int main()
{
    int tc,n,o = 1;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int a[n+3];
        long long dot = 1,sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            dot *= a[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            sum += (dot/a[i]);
        }
        dot = n*dot;
        long long int x = gcd(dot,sum);
        long long int m = dot/x;
        long long int  n = sum/x;

        printf("Case %d: %lld/%lld\n",o++,m,n);


    }


    return 0;
}
