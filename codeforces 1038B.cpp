#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int odd = 0;
    cin >> n ;
    if(n <= 2)
    {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    cout << 1 << " " << (n+1)/2 << endl;
    cout << n-1 << " ";
    for(int i = 1 ; i <= n ; i++)
    {
        if(i != (n+1)/2) cout << i << " ";
    }
    cout << endl;
    return 0;
}
