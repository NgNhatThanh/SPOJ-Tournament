#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n], b[n];
		for(int &x : a) cin>>x;
		for(int &x : b) cin>>x;
		sort(a, a+n);
		sort(b, b+n);
		int ok=1;
		for(int i=0; i<n; i++) {
			if(a[i]>b[i]) {
				ok=0;
				break;
			}
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
}