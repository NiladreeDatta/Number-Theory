#include<bits/stdc++.h>
using namespace std;

int func(int n)
{
    int res = 0;
    int ten = 1;
    while(n)
    {
        int dig = n % 10;
        n /= 10;
        if(dig)
        {
            res += (dig*ten);
            ten *= 10;
        }
    }
    return res;
}

int main()
{
    int a,b,c;
    cin >> a >> b;
    c = a+b;

    a = func(a);
    b = func(b);
    c = func(c);
    if(a+b == c) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
