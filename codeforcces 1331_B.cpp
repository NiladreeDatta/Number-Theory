#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0)
            cout<<i<<a/i<<endl;
	}
	return 0;
}