#include <bits/stdc++.h>

using namespace std;

#define faster ios::sync_with_stdio(false); cin.tie(nullptr);

typedef struct Nguoi {
	string ten;
	int ngay, thang, nam;
} ng;

void nhap(ng *a) {
	cin>>a->ten;
	cin>>a->ngay>>a->thang>>a->nam;
	cin.ignore();
}

int main() {
	faster
	int n;
	cin>>n;
	cin.ignore();
	ng arr[n];
	for(int i=0; i<n; i++) nhap(&arr[i]);
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i].nam>arr[j].nam) swap(arr[i], arr[j]);
			else if(arr[i].nam==arr[j].nam) {
				if(arr[i].thang>arr[j].thang) swap(arr[i], arr[j]);
				else if(arr[i].thang==arr[j].thang) {
					if(arr[i].ngay>arr[j].ngay) swap(arr[i], arr[j]);
				}
			}
		}
	}
	cout<<arr[n-1].ten<<'\n'<<arr[0].ten;
}