#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin >> n >> m;
    if(n >= 27)
    {
        cout << m << endl;
        return 0;
    }
    else
    {
        int fact = 1;
        for(int i = 1 ; i <= n ; i++)
        {
            fact = fact*2;
        }
        cout << m % fact << endl;


    }


    return 0;
}
