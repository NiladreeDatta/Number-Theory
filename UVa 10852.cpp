#include<bits/stdc++.h>
using namespace std;
#define mx 10002
bitset <mx> bt;
void seive()
{
    bt[0] = bt[1] = 1;
    for(int i = 4 ; i < mx ; i += 2) bt[i] = 1;
    for(int i = 3 ; i*i < mx ; i += 2)
    {
        if(!bt[i])
        {
            for(int j = i+i ; j < mx ; j += i ) bt[j] = 1;
        }
    }
}
int main()
{
    seive();
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = (n/2)+1 ; i <= n ; i++)
        {
            if(!bt[i])
            {
                cout << i << endl;
                break;
            }
        }
    }


    return 0;
}
