#include <iostream>
using namespace std;
#define ll long long

int main () {
	ll n,d;
	cin>>n>>d;
	ll arr[n];
	cin>>arr[0];
	ll res=0;
	for(int i=1; i<n; i++) {
		cin>>arr[i];
		if(arr[i]<=arr[i-1]) {
			ll tmp = arr[i-1]-arr[i];
			res+=tmp/d+1;
			arr[i]+=(tmp/d)*d+d;
		}
	}
	cout<<res;
}