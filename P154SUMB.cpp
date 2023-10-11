#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll cnt(int arr[], int l, int mid, int r) {
	ll res=0;
	vector<int> t1(arr+l, arr+mid+1);
	vector<int> t2(arr+mid+1, arr+r+1);
	int i=0, j=0;
	while(i<t1.size() && j<t2.size()) {
		if(t1[i]<=t2[j]) {
			arr[l++]=t1[i++];
		} else {
			res+=t1.size()-i;
			arr[l++]=t2[j++];
		}
	}
	while(i<t1.size()) {
		arr[l++]=t1[i++];
	}
	while(j<t2.size()) {
		arr[l++]=t2[j++];
	}
	return res;
}

ll split(int arr[], int l, int r) {
	ll res=0;
	if(l<r) {
		int mid=(l+r)/2;
		res+=split(arr, l, mid);
		res+=split(arr, mid+1, r);
		res+=cnt(arr,l, mid, r);
	}
	return res;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int &x : arr) {
		cin>>x;
	}
	cout<<split(arr, 0, n-1);
}