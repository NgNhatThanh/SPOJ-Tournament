#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	int tmp[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
		tmp[i]=arr[i];
	}
	sort(tmp, tmp+n, greater<int>());
	vector<int> idx;
	int res=tmp[k-1];
	cout<<res<<'\n';
	for(int i=0; i<n; i++) {
		if(arr[i]>res) {
			idx.push_back(i+1);
			k--;
		}
	}
	if(k) {
		for(int i=0; i<n; i++) {
			if(!k) break;
			if(arr[i]==res) {
				idx.push_back(i+1);
				k--;
			}
		}
	}
	sort(idx.begin(), idx.end());
	for(int x :idx ) cout<<x<<' ';

}