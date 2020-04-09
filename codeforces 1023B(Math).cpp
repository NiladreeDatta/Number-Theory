#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,ans;
    cin >> n >> k;
    if(k <= n)
    {
        cout << (k-1)/2 << endl;
    }
    else if(k > n)
    {
        long long int mn = k - n;
        long long int mx = n;
        //cout << max(0,(mx-mn+1)/2) << endl;
        if((mx-mn+1)/2 > 0)
        {
            cout << (mx-mn+1)/2 << endl;
        }
        else cout << 0 << endl;
    }

    return 0;
}
