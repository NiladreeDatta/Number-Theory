#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[101],ans;
    string s;
    cin >> t;
    //getline(cin,s);
    while(t--)
    {
        getline(cin,s);
        istringstream is(s);
        n = 0;

        while(is >> a[n]) ++n;
        ans = 0;

        for(int i = 0 ; i < n ; i++)
            for(int j = i+1 ; j < n ; j++)
                ans = max(ans,__gcd(a[i],a[j]));

        cout << ans << endl;

    }

    return 0;
}
