#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mod=1e9+7;

int main() {
	int n;
	cin>>n;
	ll arr[n];
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	for(ll &x: arr) {
		cin>>x;
		pq.push(x);
	}
	ll res=0;
	while(pq.size()>1) {
		ll t1=pq.top();
		pq.pop();
		t1=(t1+pq.top())%mod;
		pq.pop();
		res=(res+t1)%mod;
		pq.push(t1);

	}
	cout<<res;
	return 0;
}