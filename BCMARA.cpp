#include <bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
typedef struct Bo{
	int gio, phut ,giay, res;
} b;
 
void nhap(b *a){
	cin >> a->gio >> a->phut >> a->giay;
	a->res = a->gio*3600 + a->phut*60 + a->giay;
}
 
int main() {
	faster
	int n;
	cin >> n;
	b arr[n];
	for(int i=0; i<n; i++){
		nhap(&arr[i]);
	}
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			if(arr[i].res>arr[j].res){
				swap(arr[i], arr[j]);
			}
		}
	}
	for(int i=0; i<n; i++){
		cout << arr[i].gio << " " << arr[i].phut << " " << arr[i].giay << '\n';
	}
}  