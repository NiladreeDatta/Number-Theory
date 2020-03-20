#include<bits/stdc++.h>
using namespace std;
#define size 10000000

bool a[size+1];


int main()
{
    vector <int> prime;

    int t,x,y,n,count,m=1;
    a[0] = true;
    a[1] = true;
    for(int i = 2 ; i <= size ; i++)
    {
        if(a[i] == false) // primes
        {
            prime.push_back(i);
            for(int j = i + i ; j <= size ; j += i)
            {
                a[j] = true;
            }
        }
    }
    cin >> t;
    while(t--)
    {
        cin >> n;
        count = 0;
        for(int i = 0 ; true ; i++)
        {
            x = prime[i];
            y = n - x;
            if(x > y)
            {
                break;
            }
            if(a[y] == 0) count++;

        }
        printf("Case %d: %d\n", m++, count);

    }


    return 0;
}
