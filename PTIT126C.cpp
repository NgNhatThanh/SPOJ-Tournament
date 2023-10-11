#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n,s;
		cin>>n>>s;
		int arr[n];
		for(int &x: arr) cin>>x;
		int sum=0;
		int l=0;
		int res=1e9;
		for(int r=0;r<n;r++){
			sum+=arr[r];
			while(sum>=s){
				res = min(res, r-l+1);
				sum-=arr[l];
				l++;
			}
		}
		if(res == 1e9) cout<<"0\n";
		else cout<<res<<'\n';
	}
}