#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    while(scanf("%d",&n) && n != 0)
    {
        ans = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = i + 1 ; j <= n ; j++)
            {
                ans += __gcd(i,j);
            }
        }
        cout << ans << endl;

    }

    return 0;
}
