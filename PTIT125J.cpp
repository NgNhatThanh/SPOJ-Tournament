#include <bits/stdc++.h>

using namespace std;

char arr[100][100];
int n;

int check(int i, int j, int n) {
	if(i<n-2 && j<n-2 && n>=3) {
		if(arr[i][j]==arr[i+1][j+1] && arr[i][j]==arr[i+2][j+2] && arr[i][j]!='.') return 1;
	}
	if(i<n-2) {
		if(arr[i][j]==arr[i+1][j] && arr[i][j]==arr[i+2][j]  && arr[i][j]!='.') return 1;
	}
	if(i>1 && n>=3) {
		if(arr[i][j]==arr[i-1][j+1] && arr[i][j]==arr[i-2][j+2]  && arr[i][j]!='.') return 1;
	}
	
	if(j<n-2) {
		if(arr[i][j]==arr[i][j+1] && arr[i][j]==arr[i][j+2]  && arr[i][j]!='.') return 1;
	}
	return 0;
}

int main() {
	cin>>n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) cin>>arr[i][j];
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(check(i, j, n)) {
				cout<<arr[i][j];
				return 0;
			}
		}
	}
	cout<<"ongoing";
}