#include <bits/stdc++.h>
#define ll long long
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int &x : arr) cin>>x;
	int l=0, r=n-1;
	int max=0;
	for(int i=0; i<n; i++) {
		int dem0=0, dem1=0;
		for(int j=i; j<n; j++) {
			if(arr[j]) dem1++;
			else dem0++;
			if(dem0>dem1 && dem0-dem1>max) {
				l=i;
				r=j;
				max=dem0-dem1;
			}
		}
	}
	if(max==0) cout<<n-1;// neu ca day toan la 1 thi ta chi bien doi 1 phan tu
	else {
		int cnt=0;
		for(int i=l; i<=r; i++) {
			if(arr[i]) arr[i]=0;
			else arr[i]=1;
		}
		for(int i=0; i<n; i++) {
			if(arr[i]) cnt++;
		}
		cout<<cnt;
	}
}