#include<bits/stdc++.h>
using namespace std;
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main()
{
    int tc,n;
    while(scanf("%d",&n) == 1 && n != 0 )
    {
        if(n == 1) cout << "0" << endl;
        else cout << phi(n) << endl;
    }

    return 0;
}
