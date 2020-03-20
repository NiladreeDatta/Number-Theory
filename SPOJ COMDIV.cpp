#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b == 0) return a;
    else return gcd(b,a%b);
}

int main()
{
    int tc,a,b,i,g;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d",&a,&b);
        g = gcd(a,b);
        int count = 0;
        for( i = 1 ; i <= sqrt(g) ; i++)
        {
            if(i*i==g)
            {

                    count++;
            }
            else if(g%i==0)
            {
               count=count+2;
            }
        }
        printf("%d\n",count);

    }

    return 0;
}
