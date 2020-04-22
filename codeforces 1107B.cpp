#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,n,x;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> x;
        cout << (n-1)*9 + x << endl;
    }

    return 0;
}
