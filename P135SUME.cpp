#include <bits/stdc++.h>

using namespace std;

#define faster ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
	faster
	int arr[8];
	int tang=0, giam=0;
	cin>>arr[0];
	for(int i=1; i<8; i++) {
		cin>>arr[i];
		if(arr[i]>arr[i-1]) tang++;
		else if(arr[i]<arr[i-1]) giam++;
		else {
			tang++;
			giam++;
		}
	}
	if(tang==7 && tang>giam) cout<<"ascending";
	else if(tang<giam && giam==7) cout<<"descending";
	else cout<<"mixed";
}