#include<bits/stdc++.h>
using namespace std;

int BigMod(int a,int b)
{
    if(b == 0) return 1;
    int ret = BigMod(a,b/2);
    ret = ret*ret;
    if(b % 2 == 1) ret = ret*a;
    return ret%1000;

}


int main()
{
    int tc,n,k,lll,ttt;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        lll = BigMod(n%1000,k);
        ttt = (int) pow (10, 2 + fmod (k * log10 (n), 1));
        printf ("%d...%03d\n", ttt, lll);

    }

    return 0;
}
