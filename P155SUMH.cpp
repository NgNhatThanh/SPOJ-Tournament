#include <bits/stdc++.h>
#define ll long long
using namespace std;

int chuso(int n) {
	int res=0;
	while(n) {
		res+=n%10;
		n/=10;
	}
	return res;
}

int main() {
	ll a,b,c;
	cin>>a>>b>>c;
	set<ll> res;
	for(int i=1; i<=82; i++) {
		ll tmp = b*1ll*pow(i,a)+c;
		if(tmp>0 && tmp<1e9 && chuso(tmp)==i) res.insert(tmp);
	}
	cout<<res.size()<<'\n';
	for(ll x : res) cout<<x<<' ';
}