#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	pair<int, int> arr[n];
	for(pair<int, int> &x : arr) cin>>x.first>>x.second;
	ll res=1e18;
	// dung pp sinh de sinh ra tat ca cach chon lay it nhat mot gia vi
	for(int i=1; i<(1<<(n+1)); i++) {
		ll sum=0, mul=1;
		for(int j=0; j<n; j++) {
			if(i&(1<<j)) {
				sum+=arr[j].second;
				mul*=arr[j].first;
			}
		}
		if(sum>0) res=min(res, abs(sum-mul));
	}
	cout<<res;
}