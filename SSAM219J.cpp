#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		for(ll &x : arr) cin>>x;
		ll res=0;
		ll l=0, r=0;
		int ok=0;
		while(r<n) {
			res+=arr[r];
			while(res>k && l<r) {
				res-=arr[l];
				l++;
			}
			if(res==k) {
				ok=1;
				break;
			}
			r++;
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
}