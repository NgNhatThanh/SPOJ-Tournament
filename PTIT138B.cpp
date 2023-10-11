#include <bits/stdc++.h>

using namespace std;

int n;

struct ng{
	string bo, con;
	int tuoi;
	int tuoibo, tuoicon;
	void nhap(){
		cin>>bo>>con;
		cin>>tuoi;
	}
};


void timcon(ng arr[], string ten, int tuoi){
	for(int i=0;i<n;i++){
		if(arr[i].bo==ten){
			arr[i].tuoibo = tuoi;
			arr[i].tuoicon = arr[i].tuoibo - arr[i].tuoi;
			timcon(arr, arr[i].con, arr[i].tuoicon);
		}
	}
}

int cmp(ng a, ng b){
	if(a.tuoicon==b.tuoicon) return a.con<=b.con;
	return a.tuoicon>b.tuoicon;
}

int main() {
	int a;
	cin>>a;
	int test = 1;
	while(a--){
		cout<<"DATASET "<<test++<<'\n';
		cin>>n;
		ng arr[n];
		for(int i=0;i<n;i++) arr[i].nhap();
		timcon(arr, "Ted", 100);
		sort(arr, arr+n, cmp);
		for(ng x : arr) cout<<x.con<<" "<<x.tuoicon<<'\n';
	}
}