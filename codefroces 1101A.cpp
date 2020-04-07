#include<bits/stdc++.h>
using namespace std;
#define mx 100000
int main()
{
    int tc,l,r,d,i;
    cin >> tc;
    while(tc--)
    {
        cin >> l >> r >> d;
        if(d < l || d > r)
        {
            cout << d << endl;
        }
        else
        {
            if(r%d == 0)
            {
                cout << r+d << endl;
            }
            else
            {
                cout << r + d - (r%d) << endl;
            }
        }
    }

    return 0;
}
