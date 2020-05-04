#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <long double,long int> m;
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    long int ans = 0, mx = 0;
    for(int i =  0 ; i < n ; i++)
    {
        int b;
        cin >> b;
        if(a[i] == 0 and b == 0)
            ans += 1;
        if(a[i] != 0)
        {
            m[(b*1.0)/a[i]]++;
            mx = max(mx,m[(b*1.0)/a[i]]);
        }
    }
    cout << ans + mx << endl;

    return 0;
}
