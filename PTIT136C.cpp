#include <iostream>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n;
int arr[1005][1005];
int res[1005];


int solve(int k) {
	res[0]=k;
	for(int i=1; i<n; i++) {
		res[i]=arr[0][i]-res[0];
		if(res[i]<=0) return 0;
	}
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(res[i]+res[j]!=arr[i][j]) return 0;
		}
	}
	return 1;
}

int main() {
	fast
	cin>>n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) cin>>arr[i][j];
	}
	for(int i=1; i<arr[0][1]; i++) {
		if(solve(i)) break;
	}
	for(int i=0; i<n; i++) cout<<res[i]<<' ';
}