#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	ll arr[n];
	ll sum=0;
	vector<ll> le;
	for(ll &x : arr) {
		cin>>x;
		sum+=x;
		if(x%2) le.emplace_back(x);
	}
	if(sum%2) {
		cout<<sum;
	} else {
		if(!le.size()) cout<<0;
		else {
			sort(le.begin(), le.end());
			sum-=le[0];
			cout<<sum;
		}
	}
}