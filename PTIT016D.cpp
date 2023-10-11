#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	ll arr[n];
	for(ll &x : arr) {
		cin>>x;
	}
	ll tmp=arr[0];
	ll res=arr[0];
	sort(arr, arr+n, greater<ll>());
	int m;
	if(tmp>=arr[k]) m=k;
	else m=k-1;
	for(int i=0; i<=m; i++) {
		if(arr[i]!=tmp) res+=arr[i];
	}
	for(int i=m+1; i<n; i++) {
		if(arr[i]!=tmp) res-=arr[i];
	}
	cout<<res;
}