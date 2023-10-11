#include <bits/stdc++.h>
#define ll long long
using namespace std;

void pt(int n, map<int, int> &v, set<int> &s) {
	int can=sqrt(n);
	for(int i=2; i<=can; i++) {
		int mu=0;
		while(n%i==0) {
			mu++;
			n/=i;
		}
		if(mu) {
			v[i]=max(v[i], mu);
			s.insert(i);
		}
	}
	if(n>1) {
		v[n]=max(v[n], 1);
		s.insert(n);
	}
}

int chuso(int n){
	int res=0;
	while(n){
		n/=10;
		res++;
	}
	return res;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,n;
		cin>>a>>b>>c>>n;
		map<int,int> v;
		set<int> s;
		pt(a, v, s);
		pt(b, v, s);
		pt(c, v, s);
		ll res=1;
		for(int x : s) {
			ll tmp = pow(x,v[x]);
			res*=1ll*tmp;
		}
		ll t1 = pow(10, n-1);
		ll t2 = pow(10, n);
		if(res>=t2) cout<<"-1\n";
		else if(t1%res==0) cout<<t1<<'\n';
		else cout<<(t1/res+1)*res<<'\n';
}
}
