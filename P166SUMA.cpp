#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	map<int, int> mp;
	int arr[n];
	for(int &x : arr) {
		cin>>x;
		mp[x]++;
	}
	int cnt=0;
	for(int i=1; i<=n; i++) {
		if(mp[i]==0) cnt++;
	}
	cout<<cnt;
}