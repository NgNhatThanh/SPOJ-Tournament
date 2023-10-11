#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,k;

ll binMul(ll a, ll b, ll k){
	if(b==0) return 0;
	ll res=0;
	res = binMul(a, b/2, k);
	res = ((res%k) + (res%k))%k;
	if(b%2) res = ((res%k) + (a%k))%k;
	return res;
}

ll binPow(ll a, ll b, ll k){
	if(b==0) return 1;
	ll res = binPow(a, b/2, k);
	res = binMul(res, res, k);
	if(b%2) res = binMul(res, a, k);
	return res;
}

int main() {
	int a;
	cin>>a;
	while(a--){
		cin>>n>>m>>k;
		cout<<binPow(n,m,k)<<'\n';
	}
}
