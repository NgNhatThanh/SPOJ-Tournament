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
		int k=0;
		for(ll &x : arr) {
			cin>>x;
			if(x==0) k++;
		}
		for(int i=0; i<n; i++) {
			if(i<n-1) {
				if(arr[i]==arr[i+1] && arr[i]) {
					arr[i]*=2;
					arr[i+1]=0;
					k++;
				}
			}
			if(arr[i]) cout<<arr[i]<<" ";
		}
		while(k--) cout<<0<<" ";
		cout<<'\n';
	}
}