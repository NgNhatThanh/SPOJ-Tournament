#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1; i<=n; i++) cin>>arr[i];
	int k=1;
	int cnt=0;
	for(int i=1; i<=n; i++) {
		k=max(k, arr[i]);
		if(i==k) {
			cnt++;
		}
	}
	cout<<cnt;
}