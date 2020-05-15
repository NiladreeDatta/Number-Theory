#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        while(true)
        {
            bool ok = true;
            int cur = n;
            while(cur > 0)
            {
                if(ok and cur % 3 == 2) ok = false;
                cur /= 3;
            }
            if(ok) break;
            n++;
        }
        cout << n << endl;
    }
    return 0;
}
