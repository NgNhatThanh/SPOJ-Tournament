#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int arr[200006];
	for(int i=0; i<n; i++) cin>>arr[i];
	sort(arr, arr+n);
	int check=1;
	int tmp;
	if(k==0) tmp=1;
	else tmp=arr[k-1];
	int cnt=0;
	for(int i=0; i<n; i++) {
		if(arr[i]<=tmp) cnt++;
		if(cnt>k) {
			cout<<-1;
			return 0;
		}
	}
	cout<<tmp;
}