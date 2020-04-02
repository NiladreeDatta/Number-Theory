#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,i;
    double p;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> p >> i;
        if(p == 0)
            cout << "0.0000" << endl;
        else
            printf("%.4lf\n",p*pow(1-p,i-1)/(1-pow(1-p,n)));
    }
    return 0;
}
