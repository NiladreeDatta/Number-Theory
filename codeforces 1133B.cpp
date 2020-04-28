#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int c = 0 , n,k;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        x = x % k;
        if(a[k - x])
        {
            c++;
            a[k-x]--;
        }
        else
            a[x]++;
    }
    cout << (c+(a[0]/2))*2 << endl;

    return 0;
}
