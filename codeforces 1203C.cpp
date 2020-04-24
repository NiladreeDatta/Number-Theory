#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,gcd=0;
    cin >> n;
    while(n--)
    {
        cin >> x;
        gcd = __gcd(gcd,x);
    }
    if(gcd == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int ans = 0;
    for(long long int i = 1 ; i*i <= gcd ; i++)
    {
        if(gcd%i == 0) ans += 1 + (gcd/i != i);
    }
    cout << ans << endl;

    return 0;
}
