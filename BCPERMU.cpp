#include <bits/stdc++.h>

using namespace std;

int ok=0;

int arr[20];

void kt(int k) {
	for(int i=1; i<=k; i++) arr[i]=i;
}

void sinh(int n) {
	int i=n-1;
	while(i>=1 && arr[i]>arr[i+1]) {
		i--;
	}
	if(i==0) ok=1;
	else {
		for(int j=n; j>i; j--) {
			if(arr[j]>arr[i]) {
				swap(arr[i], arr[j]);
				break;
			}
		}
		reverse(arr+i+1, arr+n+1);
	}
}

int main() {
	int n,k;
	cin>>n;
	kt(n);
	while(1) {
		for(int i=1; i<=n; i++) cout<<arr[i];
		sinh(n);
		cout<<'\n';
		if(ok) break;
	}
}