#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n,k;
	cin>>n>>k;
	string arr[n];
	for(string &x : arr) {
		cin>>x;
	}
	sort(arr, arr+n);
	ll delta = 1+8*k;
	ll no = (-1+sqrt(delta))/2;
	k-=(no*(no+1)/2);
	if(k==0) cout<<arr[no-1];
	else {
		cout<<arr[k-1];
	}
}