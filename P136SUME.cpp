#include <bits/stdc++.h>
#define ll long long
using namespace std;

map<ll,int> mp;

int cmp(pair<ll, int> a, pair<ll, int> b) {
	if(mp[a.first]==mp[b.first]) return a.second<b.second;
	return mp[a.first]>mp[b.first];
}

int main() {
	int n,c;
	cin>>n>>c;
	ll arr[n];
	vector<pair<ll, int>> v;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
		if(!mp[arr[i]]) v.push_back({arr[i], i});
		mp[arr[i]]++;
	}
	sort(v.begin(), v.end(), cmp);
	for(pair<ll, int> x : v) {
		while(mp[x.first]--) cout<<x.first<<" ";
		mp[x.first]=0;
	}
}