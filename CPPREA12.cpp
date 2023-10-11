#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		ll arr[n];
		for(ll &x : arr) cin>>x;
		ll res=0;
		for(int i=0; i<n; i++) {
			ll tmp=1;
			for(int j=i; j<n; j++) {
				tmp*=arr[j];
				res=max(res, tmp);
			}
		}
		cout<<res<<'\n';
	}
}