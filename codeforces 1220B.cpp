#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n][n];
    for(long long i = 0 ; i < n ; i++)
    {
        for(long long j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
        }
    }
    long long g = sqrt(a[0][1]*a[0][2]/a[1][2]);
    cout << g << " ";
    for(int i = 1 ; i < n ; i++)
        cout << a[0][i]/g << " ";
    cout << endl;


    return 0;
}
