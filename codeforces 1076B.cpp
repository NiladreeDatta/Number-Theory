#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin >> n;
    for(i = 2 ; i*i <= n ; i++)
    {
        if(n%i == 0)
        {
            cout << (n-i)/2 + 1 << endl;
            return 0;
        }
    }
    cout << 1 << endl;


    return 0;
}
