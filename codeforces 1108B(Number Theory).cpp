#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,m=0,o;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a,a+n);
    y = a[n-1];
    vector <int> b;

    for(int i = 1 ; i <= y ; i++)
    {
        if(y%i == 0) b.push_back(i);
    }
    for(int i = 0 ; i < b.size() ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(b[i] == a[j])
            {
                a[j] = 0;
                break;
            }
        }
    }
    int mx = INT_MIN;
    for(int i =  0 ; i < n ; i++)
        mx = max(mx,a[i]);
    cout << y << " " << mx << endl;

    return 0;
}
