#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,k,n;
    cin >> y >> k >> n;
    int count = 0;
    for(int x = k - (y%k) ; x+y <= n ; x += k)
    {
        cout << x << " " ;
        count = 1;
    }
    if(count == 0)
    {
        cout << -1 << endl;

    }
    return 0;
}
