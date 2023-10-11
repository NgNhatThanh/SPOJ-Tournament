#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		ll arr[n];
		for(ll &x : arr) cin>>x;
		ll res[n];
		for(int i=0;i<n;i++){
			if(i==0) res[i]=arr[i]*arr[i+1];
			else if(i==n-1) res[i]=arr[n-1]*arr[n-2];
			else res[i]=arr[i-1]*arr[i+1];
			cout<<res[i]<<" ";
		}
		cout<<'\n';
	}
}