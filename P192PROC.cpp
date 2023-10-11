#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	ll arr[n];
	for(ll &x : arr) cin>>x;
	ll tmp=arr[0];
	ll res=0;
	for(int i=1; i<n; i++) {
		res+=arr[i]*tmp;
		tmp+=arr[i];
	}
	cout<<res;
}