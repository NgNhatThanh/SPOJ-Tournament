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
		int k=n;
		for(ll &x : arr){
			cin>>x;
			if(x!=0){
				cout<<x<<" ";
				k--;
			}
		}
		while(k--) cout<<"0 ";
		cout<<'\n';
	}
}