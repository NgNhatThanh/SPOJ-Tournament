#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	ll arr[k];
	for(ll &x : arr) cin>>x;
	ll m1=0;
	vector<ll> tmp(arr, arr+k);
	tmp.push_back(0);
	int d=n;
	while(d) {
		sort(tmp.begin(), tmp.end(), greater<ll>());
		while(tmp[0]>=tmp[1]) {
			if(!d) break;
			m1+=tmp[0];
			tmp[0]--;
			d--;
		}
	}
	vector<ll> tmp2(arr, arr+k);
	sort(tmp2.begin(), tmp2.end());
	d=n;
	ll m2=0;
	for(int i=0; i<k; i++) {
		if(!d) break;
		while(tmp2[i]) {
			if(!d) break;
			m2+=tmp2[i];
			tmp2[i]--;
			d--;
		}
	}
	ll temp=m1;
	m1=max(m1,m2);
	m2=min(temp, m2);
	cout<<m1<<' '<<m2;
}