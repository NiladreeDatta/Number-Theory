#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int tc;
    cin >> tc;
    while(tc--){
    cin >> a >> b;
    int ans = 0;
    while(a and b)
    {
        ans += (a/b);
        a = a%b;
        swap(a,b);
    }
    cout << ans << endl;
    }
    return 0;
}
