#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int ans = 0,f = 1000000001,odd=0;
    cin >> n;
    long long int x;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x;
        ans += x;
        if(x%2 == 1 )
            f = min(f,x);
    }
    if(ans %2 == 0)
        cout << ans << endl;
    else
        cout << ans - f << endl;



    return 0;
}
