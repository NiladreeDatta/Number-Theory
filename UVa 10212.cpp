#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ll tc, num, t = 1, choose;

    ll N, M;
    while(cin >> N >> M){

        if(M == 0){
            cout << 1 << endl;
            continue;
        }

        ll ans = 1;
        for(ll i = N; i >= N - M + 1; i--) {
            ans *= i;

            while (ans % 10 == 0) ans /= 10;

            ans %= 10000000000;

        }
        cout << ans % 10 << endl;
    }

    return 0;
}
