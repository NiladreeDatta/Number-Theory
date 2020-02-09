#include<bits/stdc++.h>
using namespace std;

int BigMod(int a,int b)
{
    if(b == 0) return 1;
    int ret = BigMod(a,b/2);
    ret = ret*ret;
    if(b % 2 == 1) ret = ret*a;
    return ret%10;

}

int main()
{
    int n,a,b,m,ans;
    scanf("%d",&n);
    while(n--)
        {
            scanf("%d%d",&a,&b);
            ans = BigMod(a%10,b);
            printf("%d\n",ans);
        }

    return 0;
}

