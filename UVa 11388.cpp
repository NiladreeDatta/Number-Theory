#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b;
    cin >> tc;
    while(tc--)

    {
        cin >> a >> b;

        if(b%a == 0)
        {
            cout << a << " " <<b << endl;
        }
        else cout << -1 << endl;

    }
    return 0;
}
