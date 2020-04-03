#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,k,p,q;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        q = n % k;
        if(n < k)
        {
            p = 0;
        }
        else
            p = k - q;

        cout << p << " " << q << endl;
    }

    return 0;
}
