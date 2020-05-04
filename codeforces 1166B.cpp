#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m = 0;
    string s = "aeiou";
    cin >> k;
    for(int i = 2 ; i*i <= k ; i++)
    {
        if(k%i == 0 and i >= 5 and k/i >= 5)
            n = i, m = k/i;
    }
    if(m == 0)
    {
        cout << -1 << endl;
        return 0;
    }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cout << s[(i+j)%5];
            }
        }



    return 0;
}
