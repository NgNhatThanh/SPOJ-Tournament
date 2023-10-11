#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	ll arr[n];
	for(ll &x : arr) {
		cin>>x;
	}
	ll tmp[n+1];
	tmp[0]=arr[0];
	for(int i=1; i<n; i++) {
		if(arr[i]>=tmp[i-1]) tmp[i]=tmp[i-1];
		else {
			tmp[i]=tmp[i-1];
			tmp[i+1]=arr[i];
			i++;
		}
	}
	ll res=LLONG_MIN;
	for(int i=1; i<n; i++) {
		res=max(res, arr[i]-tmp[i]);
	}
	cout<<res;
}