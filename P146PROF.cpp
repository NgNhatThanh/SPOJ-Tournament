#include <bits/stdc++.h>

using namespace std;

int main() {
	int arr[4];
	for(int &x : arr) cin>>x;
	int tong, hieu;
	int k=0;
	for(int i=0; i<3; i++) {
		for(int j=i+1; j<4; j++) {
			tong=arr[i]+arr[j];
			hieu=abs(arr[i]-arr[j]);
			for(int z=0; z<4; z++) {
				if(z!=i && z!=j) {
					if(arr[z]<tong && arr[z]>hieu) {
						cout<<"TRIANGLE";
						return 0;
					}
				}
			}
		}
	}
	for(int i=0; i<3; i++) {
		for(int j=i+1; j<4; j++) {
			tong=arr[i]+arr[j];
			hieu=abs(arr[i]-arr[j]);
			for(int z=0; z<4; z++) {
				if(z!=i && z!=j) {
					if(arr[z]==tong || arr[z]==hieu) {
						cout<<"SEGMENT";
						return 0;
					}
				}
			}
		}
	}
	cout<<"IMPOSSIBLE";
}