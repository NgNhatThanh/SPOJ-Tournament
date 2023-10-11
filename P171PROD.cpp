#include <iostream>
#include <algorithm>
using namespace std;

int cmp(pair<int, int> a, pair<int,int> b) {
	if(a.first==b.first) return a.second<b.second;
	return a.first<b.first;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	pair<int, int> arr[n];
	for(pair<int, int> &x : arr) {
		cin>>x.first>>x.second;
	}
	sort(arr, arr+n, cmp);
	int idx=0;
	int cnt=0;
	for(int i=1; i<n; i++) {
		if(arr[i].second>arr[idx].second) idx=i;
		else if(arr[i].first>arr[idx].first && arr[i].second<arr[idx].second) cnt++;
	}
	cout<<cnt;
}