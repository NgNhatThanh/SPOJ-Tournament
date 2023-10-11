#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int &x : arr) {
		cin>>x;
	}
	int l=0, r=n-1;
	int a=0, b=0;

	while(l<=r) {
		int m = min(arr[r], arr[l]);
		arr[l]-=m;
		arr[r]-=m;
		if(arr[l]==0) {
			l++;
			a++;
		}
		if(arr[r]==0) {
			r--;
			b++;
		}
		if(r-l==1) {
			a++;
			b++;
			break;
		}
		if(l==r) {
			a++;
			break;
		}
	}
	cout<<a<<' '<<b;
}