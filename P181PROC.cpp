#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
	if(!b) return a;
	return gcd(b, a%b);
}

int main() {
	ll a,b;
	cin>>a>>b;
	vector<ll> tmp;
	tmp.push_back(0);
	int ok=0;
	for(ll i=2; i<=b; i++) {
		if(!ok) {
			tmp.push_back(a%i);
			for(int j=0; j<tmp.size()-1; j++) {
				if(tmp[j]==a%i) {
					ok=1;
					break;
				}
			}
		} else break;
	}
	if(ok) cout<<"No";
	else cout<<"Yes";
}