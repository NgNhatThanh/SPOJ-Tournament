#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n,k;
		cin>>n>>k;
		int arr[k];
		for(int &x : arr) cin>>x;
		int i=k-1;
		while(i>=0 && arr[i]==n-k+i+1) i--;
		if(i<0) cout<<k;
		else {
			vector<int> tmp(arr, arr+k);
			arr[i]++;
			map<int, int> mp;
			for(int j=i+1; j<k; j++) arr[j]=arr[j-1]+1;
			for(int x : arr) mp[x]++;
			int res=0;
			for(int x : tmp) {
				if(mp[x]==0) {
					res++;
				}
			}
			cout<<res;
		}
		cout<<'\n';
	}
}