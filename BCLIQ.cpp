#include <bits/stdc++.h>
 
using namespace std;
 
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
	int n;
	cin >> n;
	int arr[n];
	int res[n]={1};
	for(int i=0; i<n; i++) cin >> arr[i];
	for(int i=1; i<n; i++){
		int max=0;
		for(int j=0; j<i; j++){
			if(arr[i]>arr[j] && max<res[j]) max=res[j];
		}
		res[i]=max+1;
	}
	int kq=0;
	for(int i=0; i<n; i++){
		if(res[i]>kq) kq=res[i];
	}
	cout << kq;
}  