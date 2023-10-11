#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[60]= {};

void sang() {
	a[1]=1;
	for(int i=2; i<=50; i++) {
		a[i]=pow(2, i)-1;
	}
}

int divide(ll n, ll k) {
	if(n==1) return 1;
	ll tmp = pow(2, n)-1;
	if(k==tmp/2+1) return n;
	if(k<=tmp/2) return divide(n-1, k);
	else if(k>tmp/2) return divide(n-1, k-tmp/2-1);
}

int main() {
	sang();
	int a;
	cin>>a;
	while(a--) {
		ll n, k;
		cin>>n>>k;
		cout<<divide(n,k)<<endl;
	}
}