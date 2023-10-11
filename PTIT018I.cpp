#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<int> v;
map<int,int> mp;

void pt(ll n) {
	int can = sqrt(n);
	for(int i=2; i<=can; i++) {
		if(n%i==0) {
			v.insert(i);
			int mu=0;
			while(n%i==0) {
				n/=i;
				mu++;
			}
			mp[i]=max(mp[i], mu);
		}
	}
	if(n>1) {
		v.insert(n);
		mp[n]=max(mp[n], 1);
	}
}

int chuso(ll n) {
	int res=0;
	while(n) {
		res++;
		n/=10;
	}
	return res;
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		v.clear();
		mp.clear();
		ll x,y,z,n;
		cin>>x>>y>>z>>n;
		pt(x);
		pt(y);
		pt(z);
		ll bc=1;
		for(int x : v) {
			bc*=1ll*pow(x,mp[x]);
		}
		if(chuso(bc)>n) cout<<-1;
		else {
			ll tmp = pow(10,n-1);
			if(tmp%bc && tmp>bc) {
				cout<<bc*(tmp/bc+1);
			} else cout<<bc;
		}
		cout<<'\n';
	}
}