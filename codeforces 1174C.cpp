#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int n,c=1;
    cin >> n;
    for(int i = 2 ; i <= n ; i++)
    {
        if(!a[i])
        {
            a[i] = c++;
            for(int j = i + i ; j <= n ; j += i)
            {
                a[j] = a[i];
            }
        }
        //cout << a[i] << " ";
    }
    for(int i = 2 ; i <= n ; i++) cout << a[i] << " " ;
    cout << endl;
    return 0;
}
