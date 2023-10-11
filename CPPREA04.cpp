#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		int arr[n];
		for(int &x : arr) cin>>x;
		sort(arr, arr+n);
		int l=0, r=n/2;
		if(n%2) r++;
		while(l<n/2 || r<n){
			cout<<arr[l]<<" "<<arr[r]<<" ";
			l++; r++;
		}
		while(l<n/2+n%2){
			cout<<arr[l++];
		}
		cout<<'\n';
	}
}