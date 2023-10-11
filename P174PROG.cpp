#include <iostream>
#include <map>
#define ll long long
using namespace std;

map<pair<ll, ll>, ll> ts;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int q;
	cin>>q;
	int n;
	ll u, v, w;
	while(q--) {
		cin>>n;
		if(n==1) {
			cin>>u>>v>>w;
			while(u!=v) {
				if(u<v) {
					ts[{v,v/2}]+=w;
					v/=2;
				} 
				else {
					ts[{u,u/2}]+=w;
					u/=2;
				}
			}
		} 
		else {
			cin>>u>>v;
			ll res=0;
			while(u!=v) {
				if(u<v) {
					res+=ts[{v,v/2}];
					v/=2;
				} 
				else {
					res+=ts[{u,u/2}];
					u/=2;
				}
			}
			cout<<res<<'\n';
		}
	}
}