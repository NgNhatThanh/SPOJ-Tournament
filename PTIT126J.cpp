#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n,m;
	cin>>n>>m;
	ll a[n];
	for(ll &x : a) {
		cin>>x;
	}
	sort(a, a+n);
	ll sum=0;
	int k=1;
	ll res;
	for(int i=n-2; i>=0; i--) {
		sum+=k*(a[i+1]-a[i]);
		k++;
		if(sum>=m) {
			res=a[i];
			break;
		}
	}
	if(sum>m) {
		res+=(sum-m)/(k-1);
	}
	cout<<res;
}