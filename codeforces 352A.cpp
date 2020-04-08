#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,five=0,zero=0;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] == 5) five++;
        if(a[i] == 0) zero++;
    }
    if(five < 9 && zero > 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else if(five >= 9 && zero != 0)
    {
        int x = (five/9)*9;
        for(int i = 0 ; i < x ; i++)
            cout << 5 ;
        for(int i = 0 ; i < zero ; i++)
            cout << 0 ;
        return 0;
    }
    else if(zero == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    return 0;
}
