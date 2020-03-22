#include<bits/stdc++.h>
using namespace std;
#define mx 10002
int pi[mx],pisum[mx];

void phi()
{
    pi[0] = 0;
    pi[1] = 1;
    for(int i = 2 ; i <= mx ; i++)
        pi[i] = i;
    for(int i = 2 ; i <= mx ; i++)
    {
        if(pi[i] == i)
        {
            for(int j = i ; j <= mx ; j += i)
            {
                pi[j] -= pi[j]/i;
            }
        }
    }
}
void sum_pi()
{
    pisum[1] = pi[1];
    for(int i = 2 ; i <= mx ; i++)
    {
        pisum[i] += pi[i] + pisum[i-1];
    }
}
long long int result(int n)
{
    long long int res = pisum[n];
    long long int ans = 0;
    for(int i = 1 ; i <= n ; i++)
        ans += pi[i]*res;
    return ans;
}
int main()
{
    int tc,n;
    phi();
    sum_pi();
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        long long int ans = result(n);
        cout << ans << endl;
    }

    return 0;
}
