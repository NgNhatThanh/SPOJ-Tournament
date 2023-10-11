#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n][11];
	for(int i=0; i<n; i++) {
		for(int j=0; j<11; j++) cin>>arr[i][j];
	}
	ll res=0;
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			for(int z=j+1; z<n; z++) {
				ll sum=0;
				for(int k=0; k<11; k++) {
					sum+=max(arr[i][k], max(arr[j][k], arr[z][k]));
				}
				res=max(res, sum);
			}
		}
	}
	cout<<res;
}