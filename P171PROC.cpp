#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	faster()
	int n, l;
	cin>>n>>l;
	int arr[n];
	for(int &x : arr) cin>>x;
	sort(arr, arr+n);
	double res=1ll*arr[0];
	for(int i=1; i<n; i++) {
		res=max(res, (arr[i]-arr[i-1])/2.0);
	}
	cout<<setprecision(10)<<fixed<<res;
}