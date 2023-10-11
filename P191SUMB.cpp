#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,b;
	cin>>n>>b;
	int arr[n];
	int tmp[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
		tmp[i]=arr[i];
	}
	sort(tmp, tmp+n);
	pair<int, int> bai[b];
	int sum[n]= {};
	for(pair<int, int> &x : bai) {
		cin>>x.first>>x.second;
		int *idx = lower_bound(tmp, tmp+n, x.first);
		if(idx!=tmp+n) {
			sum[idx-tmp]+=x.second;
		}
	}
	map<int, int> tien;
	for(int i=0; i<n; i++) {
		if(i>0) sum[i]=sum[i-1]+sum[i];
		tien[tmp[i]]=sum[i];
	}
	for(int x : arr) {
		cout<<tien[x]<<' ';
	}

}