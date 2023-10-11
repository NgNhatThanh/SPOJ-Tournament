#include <bits/stdc++.h>

using namespace std;

void bbsort(int arr[], int n) {
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			if(arr[i]>arr[j]) {
				int tmp = arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	bbsort(arr,n);
	for(int i=0; i<n; i++) cout<<arr[i]<<"\n";
}