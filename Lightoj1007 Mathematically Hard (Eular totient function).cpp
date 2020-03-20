#include<bits/stdc++.h>
using namespace std;
#define M 5000000
int phi[M+2];
unsigned long long sum[M+2];
void pi()
{
    for(int i = 2 ; i <= M ; i++)
    {
        phi[i] = i;
    }
    for(int i = 2 ; i <= M ; i++)
    {
        if(phi[i] == i)
        {
            for(int j = i ; j <= M ; j += i)
            {
                phi[j] -= phi[j]/i;
            }
        }
    }
}

/*void totalsum()
{
    sum[1] = 0;
    for(int i = 2 ;i <= M ; i++)
    {
        sum[i] = phi[i];
        sum[i] = sum[i]*phi[i];
        sum[i] = sum[i] + sum[i-1];
    }

}
*/
int main()
{
    int tc,a,b,x=1,ans=0;
    pi();
    //totalsum();
    cin >> tc;
    while(tc--)
    {
        cin >> a >> b;
        for(int i = a ; i <= b ; i++)
            ans += (phi[i]*phi[i]);

        //printf("Case %d: %llu\n",x++,sum[b]-sum[a-1]);
        printf("Case %d: %llu\n",x++,ans);
        ans = 0;
    }
    return 0;
}
