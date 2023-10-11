#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		ll n,k;
		cin>>n>>k;
		int res=0;
		if(k>n) res=n*(n+1)/2;
		else if(k==n) res=n*(n-1)/2;
		else {
			int tmp = n/k;
			res=k*(k-1)/2+n%k;
		}
		cout<<res<<'\n';
	}
}