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
		int l=0, r=n-1;
		while(l<=r){
			if(l==r) cout<<arr[l];
			else{
				cout<<arr[r]<<" "<<arr[l]<<' ';
			}
			l++; r--;
		}
		cout<<'\n';
	}
}