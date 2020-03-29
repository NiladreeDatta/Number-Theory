#include<bits/stdc++.h>
using namespace std;
#define i64 long long
i64 GCD(i64 a,i64 b)
{
    i64 swap,r;
    if(a==0) return b;
    if(b==0) return a;
    if(a<b){
        swap=a;
        a=b;
        b=swap;
    }
    r=a%b;
    return GCD(b,r);

}
int main()
{
    i64 n,i,j,divisor[10000],count,root,gcd,mul,m;
    while(scanf("%lld",&n)==1&&n!=0){
    root=sqrt(n);
    m=0;
    for(i=1;i<=root;i++){
        if(n%i==0){
            divisor[m++]=i;
            if(i!=(n/i))
            divisor[m++]=n/i;
        }
    }
    count=0;
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++){
            gcd=GCD(divisor[i],divisor[j]);
            mul=divisor[i]*divisor[j];
            if(mul/gcd==n){
                 count++;
            }
        }
    }
    printf("%lld %lld\n",n,count+1);
}
return 0;
}
