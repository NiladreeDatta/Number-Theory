#include<bits/stdc++.h>
using namespace std;
const int mx = 100000025;
char ar[mx];

int main()
{
    for(int i = 2 ; i * i < mx ; i++)
    {
        if(!ar[i])
        {
            for(int j = i*i ; j < mx ; j += i)
            {
                ar[j] = 1;
            }
        }
    }

    int gap = 100;

    for(int i = 2 ; i < mx ; i++)
    {
        if(!ar[i])
        {
            if(gap == 100)
            {
                cout << i << endl;
                gap = 1;
            }
            else gap++;
        }
    }

    return 0;
}
