#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll k;

ll Powmul(ll n, ll m) {
	if(n==0 || m==0) return 0;
	if(m==1) return n%k;
	ll res = Powmul(n,m/2);
	res = ((res%k)+(res)%k)%k;
	if(m%2) res = ((res%k)+n%k)%k;
	return res;
}

ll Powmod(ll n, ll m) {
	if(m==0) return 1;
	ll res = Powmod(n, m/2);
	res = Powmul(res, res)%k;
	if(m%2) res = Powmul(res, n)%k;
	return res;
}

int main() {
	ll n,m;
	cin>>n>>m>>k;
	cout<<Powmod(n,m);
}