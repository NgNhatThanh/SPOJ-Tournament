#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin>>n>>q;
	int arr[n];
	for(int &x : arr) cin>>x;
	sort(arr, arr+n);
	while(q--) {
		int l, r;
		cin>>l>>r;
		int *t1 = lower_bound(arr, arr+n, l);
		int *t2 = upper_bound(arr, arr+n, r);
		cout<<t2-t1<<'\n';
	}
}