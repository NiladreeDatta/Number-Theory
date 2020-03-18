#include<bits/stdc++.h>
using namespace std;
vector<int> phi(1000000 + 1);
void p(int n) {
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    p(1000000);
    while(n--)
    {
        int x;
        cin >> x;
        cout << phi[x] << endl;
    }

    return 0;
}
