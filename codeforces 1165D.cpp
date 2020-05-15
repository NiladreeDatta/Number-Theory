#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        vector <long long int> a,b;
        for(int i = 0 ; i < n ; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        long long x = a[0]*a[n-1];
        for(int i = 2 ; i*1ll*i <= x ; i++)
        {
            if(x%i == 0)
            {
                b.push_back(i);
                if(i != x/i)
                {
                    b.push_back(x/i);
                }
            }
        }
        sort(b.begin(),b.end());
        if(a == b)
        {
            cout << x << endl;
        }
        else cout << -1 << endl;
    }

    return 0;
}
