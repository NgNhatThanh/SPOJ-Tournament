#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int m, n;
	cin>>m>>n;
	int arr[n];
	for(int &x : arr) cin>>x;
	sort(arr, arr+n);
	int res =1e9;
	for(int i=0;i<=n-m;i++){
		res = min(res, arr[i+m-1]-arr[i]);
	}
	cout<<res;
}