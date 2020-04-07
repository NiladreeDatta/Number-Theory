#include<bits/stdc++.h>
using namespace std;
long long x,n,m,i,a[10],ans;
int main()
{
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x;
        a[x]++;
    }
    ans = (n*(n-1))/2;
    for(int i = 1 ; i <= m ; i++)
    {
        ans = ans - (a[i]*(a[i] - 1)) / 2;
    }
    cout << ans << endl;


    return 0;
}
