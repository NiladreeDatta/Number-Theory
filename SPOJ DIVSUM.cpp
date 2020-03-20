#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int tc,ans,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        ans = 0;
        if(n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
        for(int i = 2 ; i <= sqrt(n) ; i++)
        {
            if(n%i == 0)
            {
                if(i == n/i)
                {
                    ans += i;
                }
                else
                {
                    ans += i + n/i;
                }
            }
        }
        ans += 1;
        cout << ans << endl;
        }
    }

    return 0;
}
