#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		map<ll , int> mp;
		ll arr[n];
		for(ll &x: arr){
			cin>>x;
			mp[x]++;
		}
		for(int i=0;i<n;i++){
			if(mp[i]) arr[i]=i;
			else arr[i]=-1;
			cout<<arr[i]<<" ";
		}
		cout<<'\n';
	}
}