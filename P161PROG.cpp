#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n;
	cin>>n;
	int can = sqrt(n);
	ll res = 1;
	for(int i=2;i<=can;i++){
		if(n%i==0){
			while(n%i==0) n/=i;
			res*=1ll*i;
		}
	}
	if(n>1) res*=n;
	cout<<res;
}