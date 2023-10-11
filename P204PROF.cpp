#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

vector<ll> cp;

void sang() {
	for(int i=2; i<=1e6; i++) {
		cp.push_back(1ll*i*i);
	}
}

bool check(ll n) {
	if(n==1) return 0;
	for(ll &x : cp) {
		if(x>n) return 1;
		if(n%x==0) return 0;
	}
	return 1;
}

int main() {
	sang();
	ll n;
	cin>>n;
	if(n==1) cout<<1;
	else {
		vector<ll> uoc;
		ll can=sqrt(n);
		for(ll i=1; i<=can; i++) {
			if(n%i==0) {
				if(check(i)) uoc.push_back(i);
				if(n/i!=i && check(n/i)) uoc.push_back(n/i);
			}
		}
		sort(uoc.begin(), uoc.end());
		cout<<uoc[uoc.size()-1];
	}
}