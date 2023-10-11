#include <iostream>
#include <cmath>
#include<algorithm>
#define ll long long
using namespace std;

bool check(ll a) {
	ll tmp = sqrt(a);
	return tmp*tmp==a;
}

bool search(ll arr[], int n, ll a) {
	int l=0, r=n-1;
	if(!check(a)) return 0;
	ll res=sqrt(a);
	while(l<=r) {
		int mid=(l+r)/2;
		if(arr[mid]==res) return 1;
		if(arr[mid]>res) {
			r=mid-1;
		} else if(arr[mid]<res) l=mid+1;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		ll arr[n];
		for(ll &x : arr) {
			cin>>x;
		}
		sort(arr, arr+n);
		bool ok=0;
		for(int i=0; i<n; i++) {
			if(!ok) {
				for(int j=0; j<n; j++) {
					ll t1=arr[i]*arr[i];
					ll t2=arr[j]*arr[j]+t1;
					if(search(arr, n, t2)==1) {
						ok=1;
						break;
					}
				}
			} else break;
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
}