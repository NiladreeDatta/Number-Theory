#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,c=0,a[3];
        cin >> n;
        for(int i = 2 ; i*i < n && c < 2 ; i++)
        {
            if(n%i == 0)
            {
                n = n / i ;
                a[c++] = i;
            }
        }
        if(c != 2) cout << "No" << endl;
        else cout <<"YES\n"<<a[0]<<" "<< a[1]<< " "<< n << endl;
    }

    return 0;
}
