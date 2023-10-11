#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		ll arr[3];
		for(ll &x : arr) cin>>x;
		sort(arr, arr+3);
		cout<<arr[2]-arr[0]<<'\n';
	}
}
