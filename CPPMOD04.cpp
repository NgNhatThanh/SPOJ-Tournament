#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		ll n, k;
		cin>>n>>k;
		int sum=0;
		for(int i=1; i<=n; i++) {
			sum+=i%k;
		}
		if(sum==k) cout<<1;
		else cout<<0;
		cout<<'\n';
	}
}