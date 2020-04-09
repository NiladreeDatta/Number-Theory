#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long int n,m,ans=0,sum=0;
        cin >> n >> m;
        n = n/m;
        vector <int> a(10);
        for(int i = 0 ; i < 10 ; i++) a[i] = ((i+1)*m)%10;
        for(int i = 0 ; i < 10 ; i++) sum += a[i];
        for(int i = 0 ; i < n%10 ; i++) ans += a[i];

        cout << ans + (n/10)*sum << endl;


    }

    return 0;
}
