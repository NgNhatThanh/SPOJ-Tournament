#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	int t=1;
	while(a--) {
		cout<<"Case #"<<t++<<": ";
		int n;
		cin>>n;
		ll a1[n];
		ll a2[n];
		for(ll &x: a1) cin>>x;
		for(ll &x : a2) cin>>x;
		sort(a1, a1+n, greater<ll>());
		sort(a2, a2+n);
		ll res=0;
		for(int i=0; i<n; i++) {
			res+=a1[i]*a2[i];
		}
		cout<<res<<'\n';
	}
}