#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    set <int> s;
    int one = 0 , two = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
        if(a[i] == 1) one++;
        else if(a[i] == 2) two++;
    }
    if(n == 1)
    {
        cout << a[0] << endl;
        return 0;
    }
    if(s.size() == 1)
    {
        for(int i  = 0  ; i< n ; i++)
            cout << a[i] << " ";
        cout << endl;
        return 0;
    }
    cout << 2 << " ";
    cout << 1 << " ";
    for(int i = 0 ; i < two - 1 ; i++)
        cout << 2 << " ";
    for(int i = 0 ;  i < one - 1 ; i++ )
        cout << 1 << " ";

    cout << endl;


    return 0;
}
