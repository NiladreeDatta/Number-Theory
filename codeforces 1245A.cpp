#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b;
    cin >> tc;
    while(tc--)
    {
        cin >> a >> b;
        int x = __gcd(a,b);
        if(x != 1)
            cout << "Infinite" << endl;
        else cout << "Finite" << endl;
    }


    return 0;
}
