#include<stdio.h>
long long ar[100004];
void etf(){
     long long k,i,z;
     ar[0]=0;
     for(k=1;k<100001;k++){
      long long n=k;
      long long r=n;
        for(i=2;i*i<=n;i++){
          if (n%i==0)
           r-=r/i;
          while(n%i==0)
           n/=i;
       }
       if (n>1)
         r-=r / n;
       z=k-r;
       ar[k]=ar[k-1]+z;
   }
}
int main(){
    long long t,num,c=1;
    etf();
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&num);
        printf("Case %lld: %lld\n",c,ar[num]);
        c++;
    }
    return 0;
}
