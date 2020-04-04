#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,result = 0,m;
    cin >> n >> m;
    if( m % n != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        result = 0;
        int d = m/n;

        while(d%2 == 0)
            result++,d/=2;
        while(d%3 == 0)
            result++,d /= 3;
        if(d != 1)
            result = -1;

    }
    cout << result << endl;

    return 0;
}
