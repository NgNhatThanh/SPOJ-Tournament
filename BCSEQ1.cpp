#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int q, n;
		cin>>q>>n;
		ll arr[n];
		ll pre[n+5];
		ll sum=0;
		for(int i=0; i<n; i++) {
			cin>>arr[i];
			sum+=arr[i];
			if(i==0) pre[i]=arr[i];
			else pre[i]=pre[i-1]+arr[i];
		}
		ll res=1e18;
		for(int i=0; i<n; i++) {
			int k=i;
			for(int j=i+1; j<n; j++) {
				if(pre[j]-pre[k]==pre[i]) k=j;
			}
			if(k==n-1) res=min(res, pre[i]);
		}
		cout<<q<<' '<<res<<'\n';
	}
}