#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a,a+n);
    int gcd = a[0];
    for(int i = 0 ; i < n ; i++)
    {
        gcd = __gcd(a[i],gcd);
    }
    cout << gcd*n << endl;
    return 0;
}
